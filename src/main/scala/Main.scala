import chisel3._
import chisel3.util._

class Main extends Module {
  val io = IO(new Bundle {
    val in  = Input(Vec(4, UInt(35.W)))
    val out = Output(Vec(4, UInt(35.W)))
  })

  val router = Seq.fill(4)(Module(new NoCRouter()))

  for (i <- 0 until 4) {
    router(i).io.in(4) := io.in(i)
    io.out(i) := router(i).io.out(4)
  }

  router(0).io.in(0) := router(2).io.out(1)
  router(0).io.in(1) := router(2).io.out(0)
  router(0).io.in(2) := router(1).io.out(3)
  router(0).io.in(3) := router(1).io.out(2)

  router(1).io.in(0) := router(3).io.out(1)
  router(1).io.in(1) := router(3).io.out(0)
  router(1).io.in(2) := router(0).io.out(3)
  router(1).io.in(3) := router(0).io.out(2)

  router(2).io.in(0) := router(0).io.out(1)
  router(2).io.in(1) := router(0).io.out(0)
  router(2).io.in(2) := router(3).io.out(3)
  router(2).io.in(3) := router(3).io.out(2)

  router(3).io.in(0) := router(1).io.out(1)
  router(3).io.in(1) := router(1).io.out(0)
  router(3).io.in(2) := router(2).io.out(3)
  router(3).io.in(3) := router(2).io.out(2)
}

object Main extends App {
  emitVerilog(new Main(), Array("--target-dir", "generated"))
}
