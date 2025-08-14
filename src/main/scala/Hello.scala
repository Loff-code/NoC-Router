import chisel3._
import chisel3.util._

class Hello extends Module {
  val io = IO(new Bundle {
    val in  = Input(Vec(5, UInt(35.W)))
    val out = Output(Vec(5, UInt(35.W)))
  })


  val linkStageReg = RegNext(io.in)
  val HPUStageReg     = VecInit(Seq.fill(5)(RegInit(0.U(35.W))))
  val crossbarStageReg = VecInit(Seq.fill(5)(RegInit(0.U(35.W))))
  val ongoing       = VecInit(Seq.fill(5)(RegInit(false.B)))
  val destination   =  VecInit(Seq.fill(5)(RegInit(0.U(2.W))))


  for (i <- 0 until 5) {
    val valid  = linkStageReg(i)(34)
    val header = linkStageReg(i)(33)
    val end    = linkStageReg(i)(32)
    var data   = linkStageReg(i)(31, 0)

    when(header && valid) {
      ongoing(i) := true.B
      destination(i) := linkStageReg(i)(1, 0)
    }
    when(ongoing(i) && end && valid) {
      ongoing(i) := false.B
    }
    when(ongoing(i) && header) {
      data = (data << 2)(31, 0)
    }
    HPUStageReg(i) := Cat(valid, header, end, data)
  }

  for (i <- 0 until 5) {
    when(destination(i) === i.U){
      crossbarStageReg(4) := HPUStageReg(i)
    }.otherwise{
      switch(destination) {
        is(0.U) { crossbarStageReg(0) := HPUStageReg(i) }
        is(1.U) { crossbarStageReg(1) := HPUStageReg(i) }
        is(2.U) { crossbarStageReg(2) := HPUStageReg(i) }
        is(3.U) { crossbarStageReg(3) := HPUStageReg(i) }
      }
    }

    val outIdx = Mux(destination(i) === i.U(2.W), 4.U, destination(i))
    switch(outIdx) {
      is(0.U) { crossbarStageReg(0) := HPUStageReg(i) }
      is(1.U) { crossbarStageReg(1) := HPUStageReg(i) }
      is(2.U) { crossbarStageReg(2) := HPUStageReg(i) }
      is(3.U) { crossbarStageReg(3) := HPUStageReg(i) }
      is(4.U) { crossbarStageReg(4) := HPUStageReg(i) }
    }
  }


  io.out := crossbarStageReg
}

object HelloMain extends App {
  emitVerilog(new Hello())
}
