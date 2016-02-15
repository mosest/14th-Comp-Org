library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_signed.all;
 
entity alu is
    port (
        a : in std_logic_vector(15 downto 0);
        b : in std_logic_vector(15 downto 0);
        s : in std_logic_vector(1 downto 0);
 
        r : out std_logic_vector(15 downto 0);
        cout : out std_logic;
 
        less_than, equal_to, greater_than : out std_logic;
        overflow : out std_logic
    );
end entity alu;  

architecture Behavior of alu is
	signal result 			: std_logic_vector(15 downto 0);
	signal sum_for_cout 	: std_logic_vector(16 downto 0);
	signal diff_for_cout : std_logic_vector(16 downto 0);
	signal not_b 			: std_logic_vector(15 downto 0);
begin
	-- define not_b
	not_b <= (not b);
	                     
	-- define sum_for_cout                                     
	sum_for_cout <= ('0' & a) + ('0' & b);
	                     
	-- define diff_for_cout                                     
	diff_for_cout <= ('0' & a) - ('0' & b);
	
	-- define result
	with s select    
		result <=   a + b			when "00",
						a - b			when "01",
						(a and b) 	when "10",
						(a or b)		when others;
	
	-- set less_than, equal_to, and greater_than
	less_than 		<= '1' when (a<b) else '0';
	equal_to 		<= '1' when (a=b) else '0';
	greater_than 	<= '1' when (a>b) else '0';
	
	-- set cout
	cout <=  sum_for_cout(16) when s="00" else
				diff_for_cout(16) when s="01" else '0';
	
	-- set overflow
	overflow <= '1' when (s="00" and a(15) = b(15) and result(15) /= a(15)) else    
					'1' when (s="01" and a(15) = not_b(15) and result(15) /= a(15)) else
					'0';  
	
	-- set r
	r <= result;
end Behavior;