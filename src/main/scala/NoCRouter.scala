import chisel3._
import chisel3.util._
class NoCRouter extends Module {
  val io = IO(new Bundle {
    val in  = Input(Vec(5, UInt(35.W)))
    val out = Output(Vec(5, UInt(35.W)))
  })
  // 000 - north
  // 001 - south
  // 010 - east
  // 011 - west
  // 100- local

  val linkStageReg = RegNext(io.in)
  val HPUStageReg       = RegInit(VecInit(Seq.fill(5)(0.U(35.W))))
  val crossbarStageReg  = RegInit(VecInit(Seq.fill(5)(0.U(35.W))))
  val ongoing           = RegInit(VecInit(Seq.fill(5)(false.B)))
  val direction         = RegInit(VecInit(Seq.fill(5)(0.U(2.W))))
  val valid = WireDefault(VecInit((0 until 5).map(i => linkStageReg(i)(34))))
  val header = WireDefault(VecInit((0 until 5).map(i => linkStageReg(i)(33))))
  val end = WireDefault(VecInit((0 until 5).map(i => linkStageReg(i)(32))))
  val data = WireDefault(VecInit((0 until 5).map(i => linkStageReg(i)(31, 0))))


  for (i <- 0 until 5) {
    valid(i)  := linkStageReg(i)(34)
    header(i) := linkStageReg(i)(33)
    end(i)    := linkStageReg(i)(32)
    data(i)   := linkStageReg(i)(31, 0)
    when(header(i) && valid(i)) {
      ongoing(i) := true.B
      direction(i) := data(i)(31, 30)
    }
    when(RegNext(end(i) && valid(i))) {
      ongoing(i) := false.B
    }
    HPUStageReg(i) := Cat(valid(i), header(i), end(i), Mux(header(i),(data(i)<<2.U )(31,0) ,data(i)))

//    when(ongoing(i) === true.B){
//       when(direction(i) === i.U){
//        crossbarStageReg(4) := (HPUStageReg(i))
//      }.otherwise{
//         crossbarStageReg(direction(i)) := HPUStageReg(i)
//       }
//    }.otherwise{
//      when(direction(i) === i.U){
//        crossbarStageReg(4) := 0.U
//      }.otherwise{
//        crossbarStageReg(direction(i)) := 0.U
//      }
//    }

  }
  crossbarStageReg.foreach(_ := 0.U)
  for (i <- 0 until 5) {
    when(ongoing(i)){
      crossbarStageReg(Mux(direction(i) === i.U, 4.U, direction(i))) := HPUStageReg(i)
    }
  }

  io.out := crossbarStageReg
}