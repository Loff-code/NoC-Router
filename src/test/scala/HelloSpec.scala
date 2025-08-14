import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class tester extends AnyFlatSpec with ChiselScalatestTester {
  "Bullet test" should "pass" in {
    test(new Main())
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
        dut.clock.setTimeout(0)

        val hdr1 = ((BigInt(0b1100101110101) << 35-13)).U(35.W)
        val v496 = (((BigInt(0b100) << 32) | BigInt(496)).U(35.W))
        val v497 = (((BigInt(0b100) << 32) | BigInt(497)).U(35.W))
        val v498 = (((BigInt(0b100) << 32) | BigInt(498)).U(35.W))
        val v499 = (((BigInt(0b101) << 32) | BigInt(499)).U(35.W))
        val v500 = (((BigInt(0b101) << 32) | BigInt(500)).U(35.W))

        for (i <- 0 until 4) {
          dut.io.in(i).poke(0.U(35.W))
        }
        dut.io.in(0).poke(hdr1)
        dut.clock.step(1)
        dut.io.in(0).poke(v500)
        dut.clock.step(1)
        for (i <- 0 until 4) {
          dut.io.in(i).poke(0.U(35.W))
        }
        dut.clock.step(200)
      }
  }
}
