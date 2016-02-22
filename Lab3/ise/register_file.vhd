library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity register_file is
    port (
        a_data : in std_logic_vector(15 downto 0); 		-- input data port
        a_addr : in std_logic_vector(3 downto 0); 			-- register select for input a
 
        b_data : out std_logic_vector(15 downto 0);		-- first output data port
        b_addr : in std_logic_vector(3 downto 0); 			-- register select for output b
 
        c_data : out std_logic_vector(15 downto 0); 		-- second output data port
        c_addr : in std_logic_vector(3 downto 0); 			-- register select for output c
 
        load 	: in std_logic; 									-- load enable
        clear  : in std_logic; 									-- asynchronous reset, negative logic
        clk    : in std_logic 									-- positive edge triggered clock
    );
end entity register_file;

architecture Behavioral of register_file is

	type reg is array(0 to 15) of std_logic_vector(15 downto 0);
	signal my_register : reg;
	
begin
	
	-- PROCESS
	-------------------------------------------------------------------------------------------
	do_clear_stuff: process(clear, clk, load) is 
	begin
	
		-- if asynchronous clear is 0, set everything to zero
		if clear = '0' then
			for i in 2 to 15 loop
				my_register(i) <= "0000000000000000";
			end loop;
			
		-- if load is 1, at rising edge store a_data in my_register(a_addr)
		elsif (rising_edge(clk) and load = '1') then                           
			my_register(to_integer(unsigned(a_addr))) <= a_data;
		end if;
		
		-- reassign this anyway
		my_register(0) <= "0000000000000000";
		my_register(1) <= "0000000000000001";
		
	end process do_clear_stuff; 
	-------------------------------------------------------------------------------------------
	
	-- set b_data and c_data
	b_data <= my_register(to_integer(unsigned(b_addr)));
	c_data <= my_register(to_integer(unsigned(c_addr)));
	
end Behavioral;