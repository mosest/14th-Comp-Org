library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux is
    Port ( w0 : in  STD_LOGIC_VECTOR (15 downto 0);
           w1 : in  STD_LOGIC_VECTOR (15 downto 0);
           w2 : in  STD_LOGIC_VECTOR (15 downto 0);
           w3 : in  STD_LOGIC_VECTOR (15 downto 0);
           s1 : in  STD_LOGIC;
           s0 : in  STD_LOGIC;
           f : out  STD_LOGIC_VECTOR (15 downto 0));
end mux;

architecture Behavioral of mux is
	signal s : std_logic_vector(1 downto 0);
begin
	s <= (s0 & s1);
	with s select
		f <= w0 when "00",
			  w1 when "01",
			  w2 when "10",
			  w3 when others;
end Behavioral;

