----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:32:10 02/24/2017 
-- Design Name: 
-- Module Name:    program_counter - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity program_counter is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  rw : in STD_LOGIC;
			  inc : in STD_LOGIC;
           din : in  STD_LOGIC_VECTOR (7 downto 0);
           dout : out  STD_LOGIC_VECTOR (7 downto 0));
end program_counter;

architecture Behavioral of program_counter is

signal counter : unsigned (7 downto 0) := x"64";

begin
	process (clk, rst, rw, inc)
	begin
		if (rst = '1') then
			counter <= x"64";
		--elsif (clk'event and clk = '1') then
		elsif (clk = '1') then
			if (inc = '1') then				
				counter <= counter + 1;
			elsif (rw = '1') then
				counter <= unsigned(din);
			end if;
		end if;
		dout <= std_logic_vector(counter);
	end process;

end Behavioral;

