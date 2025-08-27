import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class tester1 extends AnyFlatSpec with ChiselScalatestTester {
  "Cross Router test" should "pass" in {
    test(new Main())
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
        dut.clock.setTimeout(0)

        val hdr1 = (BigInt(0b110010100) << 35-9).U(35.W)
        val hdr2 = (BigInt(0b110101011) << 35-9).U(35.W)
        
        val v496 = (((BigInt(0b100) << 32) | BigInt(496)).U(35.W))
        val v497 = (((BigInt(0b100) << 32) | BigInt(497)).U(35.W))
        val v498 = (((BigInt(0b100) << 32) | BigInt(498)).U(35.W))
        val v499 = (((BigInt(0b100) << 32) | BigInt(499)).U(35.W))
        val v500 = (((BigInt(0b101) << 32) | BigInt(500)).U(35.W))

        dut.io.in(1).poke(hdr1)
        dut.io.in(3).poke(hdr2)
        dut.clock.step(1)
        dut.io.in(1).poke(v496)
        dut.io.in(3).poke(v497)
        dut.clock.step(6)
        dut.io.in(1).poke(v500)
        dut.io.in(3).poke(v500)
        dut.clock.step(200)
      }
  }
}
