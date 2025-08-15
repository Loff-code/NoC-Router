import chisel3._
import chisel3.util._

class Main(val size: Int = 4) extends Module {
  val io = IO(new Bundle {
    val in  = Input(Vec(size * size, UInt(35.W)))
    val out = Output(Vec(size * size, UInt(35.W)))
  })

  val router = Seq.fill(size * size)(Module(new NoCRouter()))

  for (i <- 0 until size * size) {
    router(i).io.in(4) := io.in(i)
    io.out(i) := router(i).io.out(4)
  }

  def index(x: Int, y: Int): Int = y * size + x

  for (y <- 0 until size; x <- 0 until size) {
    val i = index(x, y)

    val northY = if (y == 0) size - 1 else y - 1
    val southY = if (y == size - 1) 0 else y + 1
    val westX  = if (x == 0) size - 1 else x - 1
    val eastX  = if (x == size - 1) 0 else x + 1

    val north = index(x, northY)
    val south = index(x, southY)
    val east  = index(eastX, y)
    val west  = index(westX, y)

    router(i).io.in(0) := router(north).io.out(1)
    router(i).io.in(1) := router(south).io.out(0)
    router(i).io.in(2) := router(east).io.out(3)
    router(i).io.in(3) := router(west).io.out(2)
  }
}

object Main extends App {
  emitVerilog(new Main(5), Array("--target-dir", "generated"))
}
