import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import chiseltest.simulator.WriteVcdAnnotation
import chiseltest.simulator.VerilatorBackendAnnotation

class HelloSpec extends AnyFlatSpec with ChiselScalatestTester {
  "Hello" should "just print the LED value" in {
    test(new Hello())
      .withAnnotations(Seq(
        VerilatorBackendAnnotation, // Use Verilator for speed & VCD support
        WriteVcdAnnotation          // Actually write the waveform
      )) { dut =>
//        dut.clock.setTimeout(0)
//        // Here you can poke signals and step the clock
//        dut.io.start.poke(true.B)
//        dut.io.a.poke(48.U)
//        dut.io.b.poke(18.U)
//        dut.clock.step(10)
//        dut.io.start.poke(false.B)
//        dut.clock.step(100)
      }
  }
}
