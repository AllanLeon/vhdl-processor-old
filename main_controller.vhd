----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:18:16 02/24/2017 
-- Design Name: 
-- Module Name:    main_controller - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity main_controller is
    Port ( clk : in STD_LOGIC;
			  rst : in STD_LOGIC);
end main_controller;

architecture Behavioral of main_controller is

component control_unit is
    Port ( clk : in STD_LOGIC;
			  rst : in STD_LOGIC;
			  inst : in  STD_LOGIC_VECTOR (23 downto 0);
			  psw : in STD_LOGIC_VECTOR (0 to 4);
			  pc : out STD_LOGIC_VECTOR (0 to 3) := "0000";
			  ir : out STD_LOGIC_VECTOR (0 to 4) := "00000";
			  mar : out STD_LOGIC_VECTOR (0 to 2) := "000";
			  mbr : out STD_LOGIC_VECTOR (0 to 2) := "000";
			  acc : out STD_LOGIC_VECTOR (0 to	2) := "000";
			  ram : out STD_LOGIC_VECTOR (0 to	2) := "000";
			  regs : out STD_LOGIC_VECTOR (0 to	2) := "000";
			  alua : out STD_LOGIC_VECTOR (0 to	2) := "000";
			  alub : out STD_LOGIC_VECTOR (0 to	2) := "000";
			  alu : out STD_LOGIC_VECTOR (0 to	3) := "0000";
			  output : out STD_LOGIC_VECTOR (0 to	2) := "000";
			  cb_psw : out STD_LOGIC_VECTOR(0 to 2) := "000");
end component;

component memory is
	Port ( clk : in  STD_LOGIC;
			 rst : in  STD_LOGIC;
			 rw : in  STD_LOGIC;
          t : in  STD_LOGIC;
          addr : in  STD_LOGIC_VECTOR (7 downto 0);
          din : in  STD_LOGIC_VECTOR (7 downto 0);
          dout : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

component arithmetic_logic_unit is
	Port ( clk : in  STD_LOGIC;
			 rst : in  STD_LOGIC;
			 opcode: in STD_LOGIC_VECTOR (2 downto 0):= "000";
          op1 : in  STD_LOGIC_VECTOR (7 downto 0) := x"00";
          op2 : in  STD_LOGIC_VECTOR (7 downto 0) := x"00";
          res : out  STD_LOGIC_VECTOR (7 downto 0) := x"00";
			 control : out STD_LOGIC_VECTOR(0 to 2) := "000"); -- Zero-Carry-Overflow
end component;

--component memory_address_register is
--    Port ( clk : in  STD_LOGIC;
--           rst : in  STD_LOGIC;
--           din : in  STD_LOGIC_VECTOR (7 downto 0);
--           dout : out  STD_LOGIC_VECTOR (7 downto 0));
--end component;
--
--component memory_buffer_register is
--    Port ( clk : in  STD_LOGIC;
--           rst : in  STD_LOGIC;
--           din : in  STD_LOGIC_VECTOR (7 downto 0);
--           dout : out  STD_LOGIC_VECTOR (7 downto 0));
--end component;

component instruction_register is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  rw : in STD_LOGIC;
			  opn : in STD_LOGIC_VECTOR(0 to 1);
           din : in  STD_LOGIC_VECTOR (7 downto 0);
           dout : out  STD_LOGIC_VECTOR (23 downto 0));
end component;

component program_counter is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  rw : in STD_LOGIC;
			  inc : in STD_LOGIC;
			  jmp : in STD_LOGIC;
           din : in  STD_LOGIC_VECTOR (7 downto 0);
           dout : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

component common_register is
	Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           din : in  STD_LOGIC_VECTOR (7 downto 0);
           dout : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

--component accumulator is
--    Port ( clk : in  STD_LOGIC;
--           rst : in  STD_LOGIC;
--           add : in  STD_LOGIC;
--           din : in  STD_LOGIC_VECTOR (7 downto 0);
--           dout : inout  STD_LOGIC_VECTOR (7 downto 0));
--end component;

--component mux_2x1_12bits is
--    Port ( a : in  STD_LOGIC_VECTOR (7 downto 0);
--           b : in  STD_LOGIC_VECTOR (7 downto 0);
--           s : in  STD_LOGIC;
--           x : out  STD_LOGIC_VECTOR (7 downto 0));
--end component;
--
--component mux_2x1_16bits is
--	 Port ( a : in  STD_LOGIC_VECTOR (7 downto 0);
--           b : in  STD_LOGIC_VECTOR (7 downto 0);
--           s : in  STD_LOGIC;
--           x : out  STD_LOGIC_VECTOR (7 downto 0));
--end component;

component mux_addr is
	Port (  mar : in  STD_LOGIC_VECTOR (7 downto 0);
           pc : in  STD_LOGIC_VECTOR (7 downto 0);
			  ir : in  STD_LOGIC_VECTOR (23 downto 0);
           s_mar : in  STD_LOGIC_VECTOR (0 to 1);
			  s_pc : in STD_LOGIC_VECTOR (0 to 1);
			  s_ir : in STD_LOGIC_VECTOR (0 to 4);
           addr_bus : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

component mux_data is
	Port (  ram : in  STD_LOGIC_VECTOR (7 downto 0);
           reg_mem : in  STD_LOGIC_VECTOR (7 downto 0);
			  mbr : in  STD_LOGIC_VECTOR (7 downto 0);
			  ir : in  STD_LOGIC_VECTOR (23 downto 0);
			  alua : in  STD_LOGIC_VECTOR (7 downto 0);
			  alu : in  STD_LOGIC_VECTOR (7 downto 0);
           s_ram : in  STD_LOGIC_VECTOR (0 to 1);
			  s_reg : in STD_LOGIC_VECTOR (0 to 1);
			  s_mbr : in STD_LOGIC_VECTOR (0 to 1);
			  s_ir : in STD_LOGIC_VECTOR (0 to 4);
			  s_alua : in STD_LOGIC_VECTOR (0 to 1);
			  s_alu : in STD_LOGIC;
           data_bus : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

component program_status_word is
    Port ( clk : in STD_LOGIC;
			  rst : in STD_LOGIC;
           z : in  STD_LOGIC;
			  c : in  STD_LOGIC;
           o : in  STD_LOGIC;
           r : in  STD_LOGIC;
           h : in  STD_LOGIC;
           psw : out  STD_LOGIC_VECTOR (0 to 4) := "00000");
end component;

signal cb_mar, cb_mbr, cb_acc, cb_ram, cb_regs, cb_alua, cb_alub, cb_out, cb_psw_cu, cb_psw_alu : STD_LOGIC_VECTOR (0 to 2) := "000";
signal cb_alu, cb_pc : STD_LOGIC_VECTOR (0 to 3) := "0000";
signal cb_ir : STD_LOGIC_VECTOR (0 to 4) := "00000";
signal psw_out : STD_LOGIC_VECTOR (0 to 4) := "00000"; -- Zero-Carry-Overflow-Reset-Halt

signal ram_out, regs_out, mar_out, mbr_out, pc_out, alua_out, alub_out, alu_out, output_out : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
signal ir_out : STD_LOGIC_VECTOR (23 downto 0) := x"000000";

signal addr_bus : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
signal data_bus : STD_LOGIC_VECTOR (7 downto 0) := "00000000";

begin

	--mux_mar_in: mux_2x1_12bits port map(pc_out, ir_out(11 downto 0), cb_mar(1), mar_in);
	--mux_mbr_in: mux_2x1_16bits port map(data_bus, acc_out, cb_mbr(1), mbr_in);
	
	-- DATA BUS
	-- mux
	mux_data_bus: mux_data port map(ram_out, regs_out, mbr_out, ir_out, alua_out, alu_out,
											  cb_ram(0 to 1), cb_regs(0 to 1), cb_mbr(0 to 1), cb_ir, cb_alua(0 to 1), cb_alu(0),
											  data_bus);
	-- demux?
	
	-- ADDR BUS
	-- mux
	mux_addr_bus: mux_addr port map(mar_out, pc_out, ir_out,
											  cb_mar(0 to 1), cb_pc(0 to 1), cb_ir,
											  addr_bus);
	-- demux?

	cu: control_unit port map(clk, rst, ir_out, psw_out, cb_pc, cb_ir, cb_mar, cb_mbr, cb_acc, cb_ram, cb_regs, cb_alua, cb_alub, cb_alu, cb_out, cb_psw_cu);
	ram: memory port map(cb_ram(0), rst, cb_ram(1), '0', addr_bus, data_bus, ram_out);
	reg_mem: memory port map(cb_regs(0), rst, cb_regs(1), '0', addr_bus, data_bus, regs_out);
	mar: common_register port map(cb_mar(1), rst, addr_bus, mar_out);
	mbr: common_register port map(cb_mbr(1), rst, data_bus, mbr_out);
	ir: instruction_register port map(cb_ir(0), rst, cb_ir(1), cb_ir(2 to 3), data_bus, ir_out);
	pc: program_counter port map(cb_pc(0), rst, cb_pc(1), cb_pc(2), cb_pc(3), addr_bus, pc_out);
	
	alu_a: common_register port map(cb_alua(1), rst, data_bus, alua_out);
	alu_b: common_register port map(cb_alub(1), rst, data_bus, alub_out);
	alu: arithmetic_logic_unit port map(cb_alu(0), rst, cb_alu(1 to 3), alua_out, alub_out, alu_out, cb_psw_alu);
	
	output: common_register port map(cb_out(1), rst, data_bus, output_out);
	
												--missing enable from alu
	psw: program_status_word port map(cb_psw_cu(0), rst, cb_psw_alu(0), cb_psw_alu(1), cb_psw_alu(2), cb_psw_cu(1), cb_psw_cu(2), psw_out);
	
	--acc: accumulator port map(cb_acc(0), rst, cb_acc(1), data_bus, acc_out);

end Behavioral;

