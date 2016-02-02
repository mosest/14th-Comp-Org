library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register16 is
	PORT(	D		: in 	std_logic_vector(15 downto 0);
			Aclr	: in 	std_logic;
			Clk	: in 	std_logic;
			Q		: out std_logic_vector(15 downto 0));
end register;

architecture Behavioral of register16 is

begin
	state_change: process(Clk, Aclr) is
	begin
		if Aclr = '1' then
			Q <= '0';
		elsif Clk'event and Clk = '1' then
			Q <= D;
		end if;
	end process state_change;
end Behavioral;

