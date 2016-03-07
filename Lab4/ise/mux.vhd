library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux is
    Port ( w0 : in  STD_LOGIC_VECTOR (15 downto 0);
           w1 : in  STD_LOGIC_VECTOR (15 downto 0);
           s0 : in  STD_LOGIC;
           f : out  STD_LOGIC_VECTOR (15 downto 0));
end mux;

architecture Behavioral of mux is

begin

	f <= w0 when s0 = '0' else w1;
		
end Behavioral;

