--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:15:11 03/22/2017
-- Design Name:   
-- Module Name:   D:/UPB/9no Semestre/Arquitectura y tecnologia de procesadores/VHDL/Processor/test_io.vhd
-- Project Name:  Processor
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: io_module
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_io IS
END test_io;
 
ARCHITECTURE behavior OF test_io IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT io_module
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         start : IN  std_logic;
         ins : IN  std_logic;
         din : IN  std_logic_vector(6 downto 0);
         dout : OUT  std_logic_vector(7 downto 0);
         ram : OUT  std_logic;
         exe : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal start : std_logic := '0';
   signal ins : std_logic := '0';
   signal din : std_logic_vector(6 downto 0) := (others => '0');

 	--Outputs
   signal dout : std_logic_vector(7 downto 0);
   signal ram : std_logic;
   signal exe : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: io_module PORT MAP (
          clk => clk,
          rst => rst,
          start => start,
          ins => ins,
          din => din,
          dout => dout,
          ram => ram,
          exe => exe
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
