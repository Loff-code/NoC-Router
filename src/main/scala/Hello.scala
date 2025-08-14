import chisel3._
import chisel3.util._
class Hello extends Module {
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
  val HPUStageReg     = VecInit(Seq.fill(5)(RegInit(0.U(35.W))))
  val crossbarStageReg = VecInit(Seq.fill(5)(RegInit(0.U(35.W))))
  val ongoing       = VecInit(Seq.fill(5)(RegInit(false.B)))
  val direction   =  VecInit(Seq.fill(5)(RegInit(0.U(2.W))))

  for (i <- 0 until 5) {
    val valid  = Wire(Bool())
    val header = Wire(Bool())
    val end    = Wire(Bool())
    val data   = Wire(UInt(32.W))
    val headerData = Wire(UInt(34.W))

    valid  := linkStageReg(i)(34)
    header := linkStageReg(i)(33)
    end    := linkStageReg(i)(32)
    data   := linkStageReg(i)(31, 0)
    headerData := linkStageReg(i)(31, 0)<<2
    when(header && valid) {
      ongoing(i) := true.B
      direction(i) := data(31, 30)
      data := headerData(31,0)
    }
    when(end && valid) {
      ongoing(i) := false.B
    }
    HPUStageReg(i) := Cat(valid, header, end, data)
    crossbarStageReg(direction(i)) := Mux(ongoing(i) === true.B, HPUStageReg(i), 0.U)
    when(direction(i) === i.U){
      crossbarStageReg(4) := HPUStageReg(i)
    }
  }
  io.out := crossbarStageReg
}

object RouterModuleMain extends App {
  emitVerilog(new Hello())
}
