library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity sign_extend is
    port (
        input : in std_logic_vector(3 downto 0);
        output : out std_logic_vector(15 downto 0)
    );
end entity sign_extend;

architecture Behavioral of sign_extend is
	
begin

	-- fill in the front of the output with the front of the input
	output(15) <= input(3);
	output(14) <= input(3);
	output(13) <= input(3);
	output(12) <= input(3);
	output(11) <= input(3);
	output(10) <= input(3);
	output(9) <= input(3);
	output(8) <= input(3);
	output(7) <= input(3);
	output(6) <= input(3);
	output(5) <= input(3);
	output(4) <= input(3);
	
	-- the last four digits of output are the same as the input
	output(3) <= input(3);
	output(2) <= input(2);
	output(1) <= input(1);
	output(0) <= input(0);
	
end Behavioral;

