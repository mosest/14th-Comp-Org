library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

entity adder is
    Port ( a : in  STD_LOGIC_VECTOR (15 downto 0);
           b : in  STD_LOGIC_VECTOR (15 downto 0);
           cin : in  STD_LOGIC;
           sum : out  STD_LOGIC_VECTOR (15 downto 0);
           cout : out  STD_LOGIC);
end adder;

architecture Behavioral of adder is
	signal s : std_logic_vector(16 downto 0); -- 17 bits
begin
	s <= ('0' & a) + b + cin;
	sum <= s(15 downto 0);
	cout <= s(16);
end Behavioral;

