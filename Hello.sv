import chisel3._
import chisel3.util._

class Hello extends Module {
  val io = IO(new Bundle {
    val  in = Input(Vec(5,UInt(35.W))
    val  out = Output(Vec(5,UInt(35.W))

  })
  }
   val ongoing = Vec(5,RegInit(false.B))
    val destination = Vec(5,RegInit(0.U(2.W)))
    val preHPU = RegNext(io.in)
     for (i <- 0 until 5)  {
     val valid = preHPU(i)(34)
    val header = preHPU(i)(33)
    val end = preHPU(i)(32)
    val data = preHPU(i)(31,0)

    when(header && valid){
    ongoing(i) := true.B
    destination(i) := preHPU(i)(1,0)
    }

    when(ongoing(i) && end && valid) {
      ongoing(i) := false.B
    }

    when(ongoing(i) && header) {
    data:= data << 2

    }



   val afterHPU = RegInit(0.U(35.W))
   afterHPU := Cat(valid, header, end, data)

    }

val after cressbar = RegInit(Seq.fill(5)(0.U(35.W)))
    for (i <- 0 until 5) {
      when(ongoing(i)) {
        afterCressbar(destination(i)) := afterHPU(i)
      }
      when(destination === i.U) {
     //Local stuff
      }
      } .otherwise {
        io.out(i) := 0.U(35.W)
      }
    }






  val init :: test :: aminb :: bmina :: fin :: Nil = Enum(5)
  val stateReg = RegInit(init)
  val a = RegInit(0.U(32.W))
  val b = RegInit(0.U(32.W))
  io.gcd := 0.U(32.W)
  io.done := false.B


  switch(stateReg) {
    is(init) {
      when(io.start) {
        a := io.a
        b := io.b
        stateReg := test
      }
    }
    is(test) {
    stateReg := Mux(!(a===b), Mux(a > b, aminb, bmina), fin)
    }
    is(aminb) {
      a := a - b
      stateReg := test
    }
    is(bmina) {
      b := b - a
      stateReg := test
    }
    is(fin) {
      io.gcd := a
      io.done := true.B
    }

  }
}
object HelloMain extends App {
  println("Hello World, I will now generate the Verilog file!")
  emitVerilog(new Hello())
}
