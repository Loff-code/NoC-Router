module Hello( // @[src/main/scala/Hello.scala 3:7]
  input         clock, // @[src/main/scala/Hello.scala 3:7]
  input         reset, // @[src/main/scala/Hello.scala 3:7]
  input  [34:0] io_in_0, // @[src/main/scala/Hello.scala 4:14]
  input  [34:0] io_in_1, // @[src/main/scala/Hello.scala 4:14]
  input  [34:0] io_in_2, // @[src/main/scala/Hello.scala 4:14]
  input  [34:0] io_in_3, // @[src/main/scala/Hello.scala 4:14]
  input  [34:0] io_in_4, // @[src/main/scala/Hello.scala 4:14]
  output [34:0] io_out_0, // @[src/main/scala/Hello.scala 4:14]
  output [34:0] io_out_1, // @[src/main/scala/Hello.scala 4:14]
  output [34:0] io_out_2, // @[src/main/scala/Hello.scala 4:14]
  output [34:0] io_out_3, // @[src/main/scala/Hello.scala 4:14]
  output [34:0] io_out_4 // @[src/main/scala/Hello.scala 4:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [34:0] linkStageReg_0; // @[src/main/scala/Hello.scala 16:29]
  reg [34:0] linkStageReg_1; // @[src/main/scala/Hello.scala 16:29]
  reg [34:0] linkStageReg_2; // @[src/main/scala/Hello.scala 16:29]
  reg [34:0] linkStageReg_3; // @[src/main/scala/Hello.scala 16:29]
  reg [34:0] linkStageReg_4; // @[src/main/scala/Hello.scala 16:29]
  wire  valid = linkStageReg_0[34]; // @[src/main/scala/Hello.scala 30:30]
  wire  header = linkStageReg_0[33]; // @[src/main/scala/Hello.scala 31:30]
  wire  end_ = linkStageReg_0[32]; // @[src/main/scala/Hello.scala 32:30]
  wire [33:0] headerData = {linkStageReg_0[31:0], 2'h0}; // @[src/main/scala/Hello.scala 34:41]
  wire  _T = header & valid; // @[src/main/scala/Hello.scala 35:17]
  wire [31:0] data = header & valid ? headerData[31:0] : linkStageReg_0[31:0]; // @[src/main/scala/Hello.scala 33:12 35:27 38:12]
  wire [1:0] direction_0 = header & valid ? data[31:30] : 2'h0; // @[src/main/scala/Hello.scala 35:27 37:20 20:29]
  wire  ongoing_0 = end_ & valid ? 1'h0 : _T; // @[src/main/scala/Hello.scala 40:24 41:18]
  wire [34:0] HPUStageReg_0 = {valid,header,end_,data}; // @[src/main/scala/Hello.scala 44:26]
  wire [34:0] _crossbarStageReg_T_1 = ongoing_0 ? HPUStageReg_0 : 35'h0; // @[src/main/scala/Hello.scala 46:42]
  wire [34:0] _GEN_4 = 2'h0 == direction_0 ? _crossbarStageReg_T_1 : 35'h0; // @[src/main/scala/Hello.scala 18:33 46:{36,36}]
  wire [34:0] _GEN_5 = 2'h1 == direction_0 ? _crossbarStageReg_T_1 : 35'h0; // @[src/main/scala/Hello.scala 18:33 46:{36,36}]
  wire [34:0] _GEN_6 = 2'h2 == direction_0 ? _crossbarStageReg_T_1 : 35'h0; // @[src/main/scala/Hello.scala 18:33 46:{36,36}]
  wire [34:0] _GEN_7 = 2'h3 == direction_0 ? _crossbarStageReg_T_1 : 35'h0; // @[src/main/scala/Hello.scala 18:33 46:{36,36}]
  wire [2:0] _GEN_50 = {{1'd0}, direction_0}; // @[src/main/scala/Hello.scala 18:33 46:{36,36}]
  wire [34:0] _GEN_8 = 3'h4 == _GEN_50 ? _crossbarStageReg_T_1 : 35'h0; // @[src/main/scala/Hello.scala 18:33 46:{36,36}]
  wire [34:0] _GEN_9 = direction_0 == 2'h0 ? HPUStageReg_0 : _GEN_8; // @[src/main/scala/Hello.scala 47:31 48:27]
  wire  valid_1 = linkStageReg_1[34]; // @[src/main/scala/Hello.scala 30:30]
  wire  header_1 = linkStageReg_1[33]; // @[src/main/scala/Hello.scala 31:30]
  wire  end_1 = linkStageReg_1[32]; // @[src/main/scala/Hello.scala 32:30]
  wire [33:0] headerData_1 = {linkStageReg_1[31:0], 2'h0}; // @[src/main/scala/Hello.scala 34:41]
  wire  _T_3 = header_1 & valid_1; // @[src/main/scala/Hello.scala 35:17]
  wire [31:0] data_1 = header_1 & valid_1 ? headerData_1[31:0] : linkStageReg_1[31:0]; // @[src/main/scala/Hello.scala 33:12 35:27 38:12]
  wire [1:0] direction_1 = header_1 & valid_1 ? data_1[31:30] : 2'h0; // @[src/main/scala/Hello.scala 35:27 37:20 20:29]
  wire  ongoing_1 = end_1 & valid_1 ? 1'h0 : _T_3; // @[src/main/scala/Hello.scala 40:24 41:18]
  wire [34:0] HPUStageReg_1 = {valid_1,header_1,end_1,data_1}; // @[src/main/scala/Hello.scala 44:26]
  wire [34:0] _crossbarStageReg_T_3 = ongoing_1 ? HPUStageReg_1 : 35'h0; // @[src/main/scala/Hello.scala 46:42]
  wire [34:0] _GEN_14 = 2'h0 == direction_1 ? _crossbarStageReg_T_3 : _GEN_4; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_15 = 2'h1 == direction_1 ? _crossbarStageReg_T_3 : _GEN_5; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_16 = 2'h2 == direction_1 ? _crossbarStageReg_T_3 : _GEN_6; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_17 = 2'h3 == direction_1 ? _crossbarStageReg_T_3 : _GEN_7; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [2:0] _GEN_51 = {{1'd0}, direction_1}; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_18 = 3'h4 == _GEN_51 ? _crossbarStageReg_T_3 : _GEN_9; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_19 = direction_1 == 2'h1 ? HPUStageReg_1 : _GEN_18; // @[src/main/scala/Hello.scala 47:31 48:27]
  wire  valid_2 = linkStageReg_2[34]; // @[src/main/scala/Hello.scala 30:30]
  wire  header_2 = linkStageReg_2[33]; // @[src/main/scala/Hello.scala 31:30]
  wire  end_2 = linkStageReg_2[32]; // @[src/main/scala/Hello.scala 32:30]
  wire [33:0] headerData_2 = {linkStageReg_2[31:0], 2'h0}; // @[src/main/scala/Hello.scala 34:41]
  wire  _T_6 = header_2 & valid_2; // @[src/main/scala/Hello.scala 35:17]
  wire [31:0] data_2 = header_2 & valid_2 ? headerData_2[31:0] : linkStageReg_2[31:0]; // @[src/main/scala/Hello.scala 33:12 35:27 38:12]
  wire [1:0] direction_2 = header_2 & valid_2 ? data_2[31:30] : 2'h0; // @[src/main/scala/Hello.scala 35:27 37:20 20:29]
  wire  ongoing_2 = end_2 & valid_2 ? 1'h0 : _T_6; // @[src/main/scala/Hello.scala 40:24 41:18]
  wire [34:0] HPUStageReg_2 = {valid_2,header_2,end_2,data_2}; // @[src/main/scala/Hello.scala 44:26]
  wire [34:0] _crossbarStageReg_T_5 = ongoing_2 ? HPUStageReg_2 : 35'h0; // @[src/main/scala/Hello.scala 46:42]
  wire [34:0] _GEN_24 = 2'h0 == direction_2 ? _crossbarStageReg_T_5 : _GEN_14; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_25 = 2'h1 == direction_2 ? _crossbarStageReg_T_5 : _GEN_15; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_26 = 2'h2 == direction_2 ? _crossbarStageReg_T_5 : _GEN_16; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_27 = 2'h3 == direction_2 ? _crossbarStageReg_T_5 : _GEN_17; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [2:0] _GEN_52 = {{1'd0}, direction_2}; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_28 = 3'h4 == _GEN_52 ? _crossbarStageReg_T_5 : _GEN_19; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_29 = direction_2 == 2'h2 ? HPUStageReg_2 : _GEN_28; // @[src/main/scala/Hello.scala 47:31 48:27]
  wire  valid_3 = linkStageReg_3[34]; // @[src/main/scala/Hello.scala 30:30]
  wire  header_3 = linkStageReg_3[33]; // @[src/main/scala/Hello.scala 31:30]
  wire  end_3 = linkStageReg_3[32]; // @[src/main/scala/Hello.scala 32:30]
  wire [33:0] headerData_3 = {linkStageReg_3[31:0], 2'h0}; // @[src/main/scala/Hello.scala 34:41]
  wire  _T_9 = header_3 & valid_3; // @[src/main/scala/Hello.scala 35:17]
  wire [31:0] data_3 = header_3 & valid_3 ? headerData_3[31:0] : linkStageReg_3[31:0]; // @[src/main/scala/Hello.scala 33:12 35:27 38:12]
  wire [1:0] direction_3 = header_3 & valid_3 ? data_3[31:30] : 2'h0; // @[src/main/scala/Hello.scala 35:27 37:20 20:29]
  wire  ongoing_3 = end_3 & valid_3 ? 1'h0 : _T_9; // @[src/main/scala/Hello.scala 40:24 41:18]
  wire [34:0] HPUStageReg_3 = {valid_3,header_3,end_3,data_3}; // @[src/main/scala/Hello.scala 44:26]
  wire [34:0] _crossbarStageReg_T_7 = ongoing_3 ? HPUStageReg_3 : 35'h0; // @[src/main/scala/Hello.scala 46:42]
  wire [34:0] _GEN_34 = 2'h0 == direction_3 ? _crossbarStageReg_T_7 : _GEN_24; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_35 = 2'h1 == direction_3 ? _crossbarStageReg_T_7 : _GEN_25; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_36 = 2'h2 == direction_3 ? _crossbarStageReg_T_7 : _GEN_26; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_37 = 2'h3 == direction_3 ? _crossbarStageReg_T_7 : _GEN_27; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [2:0] _GEN_53 = {{1'd0}, direction_3}; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_38 = 3'h4 == _GEN_53 ? _crossbarStageReg_T_7 : _GEN_29; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_39 = direction_3 == 2'h3 ? HPUStageReg_3 : _GEN_38; // @[src/main/scala/Hello.scala 47:31 48:27]
  wire  valid_4 = linkStageReg_4[34]; // @[src/main/scala/Hello.scala 30:30]
  wire  header_4 = linkStageReg_4[33]; // @[src/main/scala/Hello.scala 31:30]
  wire  end_4 = linkStageReg_4[32]; // @[src/main/scala/Hello.scala 32:30]
  wire [33:0] headerData_4 = {linkStageReg_4[31:0], 2'h0}; // @[src/main/scala/Hello.scala 34:41]
  wire  _T_12 = header_4 & valid_4; // @[src/main/scala/Hello.scala 35:17]
  wire [31:0] data_4 = header_4 & valid_4 ? headerData_4[31:0] : linkStageReg_4[31:0]; // @[src/main/scala/Hello.scala 33:12 35:27 38:12]
  wire [1:0] direction_4 = header_4 & valid_4 ? data_4[31:30] : 2'h0; // @[src/main/scala/Hello.scala 35:27 37:20 20:29]
  wire  ongoing_4 = end_4 & valid_4 ? 1'h0 : _T_12; // @[src/main/scala/Hello.scala 40:24 41:18]
  wire [34:0] HPUStageReg_4 = {valid_4,header_4,end_4,data_4}; // @[src/main/scala/Hello.scala 44:26]
  wire [34:0] _crossbarStageReg_T_9 = ongoing_4 ? HPUStageReg_4 : 35'h0; // @[src/main/scala/Hello.scala 46:42]
  wire [2:0] _GEN_54 = {{1'd0}, direction_4}; // @[src/main/scala/Hello.scala 46:{36,36}]
  wire [34:0] _GEN_48 = 3'h4 == _GEN_54 ? _crossbarStageReg_T_9 : _GEN_39; // @[src/main/scala/Hello.scala 46:{36,36}]
  assign io_out_0 = 2'h0 == direction_4 ? _crossbarStageReg_T_9 : _GEN_34; // @[src/main/scala/Hello.scala 46:{36,36}]
  assign io_out_1 = 2'h1 == direction_4 ? _crossbarStageReg_T_9 : _GEN_35; // @[src/main/scala/Hello.scala 46:{36,36}]
  assign io_out_2 = 2'h2 == direction_4 ? _crossbarStageReg_T_9 : _GEN_36; // @[src/main/scala/Hello.scala 46:{36,36}]
  assign io_out_3 = 2'h3 == direction_4 ? _crossbarStageReg_T_9 : _GEN_37; // @[src/main/scala/Hello.scala 46:{36,36}]
  assign io_out_4 = _GEN_54 == 3'h4 ? HPUStageReg_4 : _GEN_48; // @[src/main/scala/Hello.scala 47:31 48:27]
  always @(posedge clock) begin
    linkStageReg_0 <= io_in_0; // @[src/main/scala/Hello.scala 16:29]
    linkStageReg_1 <= io_in_1; // @[src/main/scala/Hello.scala 16:29]
    linkStageReg_2 <= io_in_2; // @[src/main/scala/Hello.scala 16:29]
    linkStageReg_3 <= io_in_3; // @[src/main/scala/Hello.scala 16:29]
    linkStageReg_4 <= io_in_4; // @[src/main/scala/Hello.scala 16:29]
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
  _RAND_0 = {2{`RANDOM}};
  linkStageReg_0 = _RAND_0[34:0];
  _RAND_1 = {2{`RANDOM}};
  linkStageReg_1 = _RAND_1[34:0];
  _RAND_2 = {2{`RANDOM}};
  linkStageReg_2 = _RAND_2[34:0];
  _RAND_3 = {2{`RANDOM}};
  linkStageReg_3 = _RAND_3[34:0];
  _RAND_4 = {2{`RANDOM}};
  linkStageReg_4 = _RAND_4[34:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
