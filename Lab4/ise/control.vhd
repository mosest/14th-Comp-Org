library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity control is
    port (
		  -- part 1 of lab
        opcode 	: in std_logic_vector(3 downto 0);
        alu_src 	: out std_logic;
        alu_op 	: out std_logic_vector(1 downto 0);
		  
		  -- part 2 of lab
		  reg_src 	: out std_logic;
		  mem_write	: out std_logic;
		  mem_read 	: out std_logic;
		  reg_load 	: out std_logic;
		  reg_dest 	: out std_logic
    );
end entity control;

architecture Behavioral of control is

begin

	-- src is 1 (immediate) when opcode is 4 or 5 (addi or subi)
	alu_src <= '1' when (opcode = "0100" or opcode = "0101") else '0';
	
	-- set alu_op
	with opcode select
		alu_op <= 	"00" when "0000", -- add
						"00" when "0100", -- addi
						"01" when "0001",	-- sub
						"01" when "0101", -- subi
						"10" when "0010", -- and
						"11" when others;	-- or
						
	-- set reg_src
	reg_src <= '0' when (opcode = "1000") else '1';
	
	-- set mem_write
	mem_write <= '1' when (opcode = "1100") else '0';
	
	-- set mem_read (only 1 when LW)
	mem_read <= '1' when (opcode = "1000") else '0';
	
	-- set reg_load
	reg_load <= '0' when (opcode = "1100") else '1';
	
	-- set reg_dest (3:0 is 0, 11:8 is 1 (for SW))
	reg_dest <= '1' when (opcode = "1100") else '0';

end Behavioral;

