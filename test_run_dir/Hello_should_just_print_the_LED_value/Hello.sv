module Hello( // @[src/main/scala/Hello.scala 4:7]
  input         clock, // @[src/main/scala/Hello.scala 4:7]
  input         reset, // @[src/main/scala/Hello.scala 4:7]
  input         io_start, // @[src/main/scala/Hello.scala 5:14]
  input  [31:0] io_a, // @[src/main/scala/Hello.scala 5:14]
  input  [31:0] io_b, // @[src/main/scala/Hello.scala 5:14]
  output [31:0] io_gcd, // @[src/main/scala/Hello.scala 5:14]
  output        io_done // @[src/main/scala/Hello.scala 5:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] stateReg; // @[src/main/scala/Hello.scala 13:25]
  reg [31:0] a; // @[src/main/scala/Hello.scala 14:18]
  reg [31:0] b; // @[src/main/scala/Hello.scala 15:18]
  wire [2:0] _GEN_3 = a > b ? 3'h2 : 3'h3; // @[src/main/scala/Hello.scala 30:21 31:20 33:20]
  wire [31:0] _a_T_1 = a - b; // @[src/main/scala/Hello.scala 40:14]
  wire [31:0] _b_T_1 = b - a; // @[src/main/scala/Hello.scala 44:14]
  wire [31:0] _GEN_5 = 3'h4 == stateReg ? a : 32'h0; // @[src/main/scala/Hello.scala 16:10 20:20 48:14]
  wire [31:0] _GEN_7 = 3'h3 == stateReg ? _b_T_1 : b; // @[src/main/scala/Hello.scala 15:18 20:20 44:9]
  wire [2:0] _GEN_8 = 3'h3 == stateReg ? 3'h1 : stateReg; // @[src/main/scala/Hello.scala 20:20 45:16 13:25]
  wire [31:0] _GEN_9 = 3'h3 == stateReg ? 32'h0 : _GEN_5; // @[src/main/scala/Hello.scala 16:10 20:20]
  wire  _GEN_10 = 3'h3 == stateReg ? 1'h0 : 3'h4 == stateReg; // @[src/main/scala/Hello.scala 17:11 20:20]
  wire [31:0] _GEN_14 = 3'h2 == stateReg ? 32'h0 : _GEN_9; // @[src/main/scala/Hello.scala 16:10 20:20]
  wire  _GEN_15 = 3'h2 == stateReg ? 1'h0 : _GEN_10; // @[src/main/scala/Hello.scala 17:11 20:20]
  wire [31:0] _GEN_19 = 3'h1 == stateReg ? 32'h0 : _GEN_14; // @[src/main/scala/Hello.scala 16:10 20:20]
  wire  _GEN_20 = 3'h1 == stateReg ? 1'h0 : _GEN_15; // @[src/main/scala/Hello.scala 17:11 20:20]
  assign io_gcd = 3'h0 == stateReg ? 32'h0 : _GEN_19; // @[src/main/scala/Hello.scala 16:10 20:20]
  assign io_done = 3'h0 == stateReg ? 1'h0 : _GEN_20; // @[src/main/scala/Hello.scala 17:11 20:20]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/Hello.scala 13:25]
      stateReg <= 3'h0; // @[src/main/scala/Hello.scala 13:25]
    end else if (3'h0 == stateReg) begin // @[src/main/scala/Hello.scala 20:20]
      if (io_start) begin // @[src/main/scala/Hello.scala 22:22]
        stateReg <= 3'h1; // @[src/main/scala/Hello.scala 25:18]
      end
    end else if (3'h1 == stateReg) begin // @[src/main/scala/Hello.scala 20:20]
      if (~(a == b)) begin // @[src/main/scala/Hello.scala 29:24]
        stateReg <= _GEN_3;
      end else begin
        stateReg <= 3'h4; // @[src/main/scala/Hello.scala 36:18]
      end
    end else if (3'h2 == stateReg) begin // @[src/main/scala/Hello.scala 20:20]
      stateReg <= 3'h1; // @[src/main/scala/Hello.scala 41:16]
    end else begin
      stateReg <= _GEN_8;
    end
    if (reset) begin // @[src/main/scala/Hello.scala 14:18]
      a <= 32'h0; // @[src/main/scala/Hello.scala 14:18]
    end else if (3'h0 == stateReg) begin // @[src/main/scala/Hello.scala 20:20]
      if (io_start) begin // @[src/main/scala/Hello.scala 22:22]
        a <= io_a; // @[src/main/scala/Hello.scala 23:11]
      end
    end else if (!(3'h1 == stateReg)) begin // @[src/main/scala/Hello.scala 20:20]
      if (3'h2 == stateReg) begin // @[src/main/scala/Hello.scala 20:20]
        a <= _a_T_1; // @[src/main/scala/Hello.scala 40:9]
      end
    end
    if (reset) begin // @[src/main/scala/Hello.scala 15:18]
      b <= 32'h0; // @[src/main/scala/Hello.scala 15:18]
    end else if (3'h0 == stateReg) begin // @[src/main/scala/Hello.scala 20:20]
      if (io_start) begin // @[src/main/scala/Hello.scala 22:22]
        b <= io_b; // @[src/main/scala/Hello.scala 24:11]
      end
    end else if (!(3'h1 == stateReg)) begin // @[src/main/scala/Hello.scala 20:20]
      if (!(3'h2 == stateReg)) begin // @[src/main/scala/Hello.scala 20:20]
        b <= _GEN_7;
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  stateReg = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  a = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  b = _RAND_2[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
