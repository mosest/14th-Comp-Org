library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity system is
	port(
		instruction : in std_logic_vector(15 downto 0);
		clock			: in std_logic;
		reset			: in std_logic;
      mem_dump 	: in std_logic := '0'
	);
end system;

architecture Behavioral of system is

	-- signals for control
	signal control_alu_src 	: std_logic;
	signal control_alu_op 	: std_logic_vector(1 downto 0);
	
	signal control_reg_dest	: std_logic;
	signal control_reg_src	: std_logic;
	signal control_reg_load	: std_logic;
	signal control_mem_read	: std_logic;
	signal control_mem_write: std_logic;
	
	-- two inputs to do stuff with
	signal input_1 	: std_logic_vector(15 downto 0);
	signal input_2 	: std_logic_vector(15 downto 0);
	signal input_imm 	: std_logic_vector(15 downto 0);
	
	-- thing to load into a spot in the register
	signal result : std_logic_vector(15 downto 0);
	
	-- memory signals
	signal mem_dataout : std_logic;
	signal rt_data : std_logic_vector(15 downto 0);
	
	-- a random thing whatever
	signal c_data_pre_imm_mux : std_logic_vector(15 downto 0);
	signal instruction_post_nyb_mux : std_logic_vector(15 downto 0);

begin

	-- Memory Port Map
	this_memory: entity work.memory
		PORT MAP(
			clk => clock,
			read_en => control_mem_read,
			write_en => control_mem_write,
			addr => result,
			data_in => rt_data,
			data_out => mem_dataout,
			mem_dump => '0'
		);
	
	-- Control Port Map ----------------------------------------------------
	--
	-- control tells you what operand you're doing and whether
	-- you're using immediate or not
	this_control: entity work.control
		PORT MAP (
			-- input
			opcode 	=> instruction(15 downto 12),
			
			-- output
			alu_src 	=> control_alu_src,
			alu_op 	=> control_alu_op,
			
			reg_load => control_reg_load,
			reg_src => control_reg_src,
			reg_dest => control_reg_dest,
			mem_write => control_mem_write,
			mem_read => control_mem_read
		);
	
	-- Sign-Extend Port Map ------------------------------------------------
	this_signextend: entity work.sign_extend
		PORT MAP (
			-- input
			input => instruction(3 downto 0),
			
			-- output
			output => input_imm
		);
		
	-- Register File Port Map ----------------------------------------------
	--
	-- now we have to get c_data so we can feed it
	-- into the mux
	this_regfile: entity work.reg_file
		PORT MAP (
			-- input
			a_data => result,
			a_addr => instruction(11 downto 8),
			b_addr => instruction(7 downto 4),
			c_addr => instruction(3 downto 0),
			clear  => reset,
			clk    => clock,
			load 	 => control_reg_load,
			
			-- output
			b_data => input_1,
			c_data => c_data_pre_imm_mux
		);
		
	-- Nybble Multiplexer Port Map ------------------------------------------------
	instruction_to_reg_mux: entity work.mux
		PORT MAP (
			-- input
 			w0 => instruction(3 downto 0),
			w1 => instruction(11 downto 8),
			s0 => control_reg_dest,
			
			-- output
			f => instruction_post_nyb_mux
		);
		
	-- Immediate Choice Multiplexer Port Map ------------------------------------------------
	reg_to_alu_mux: entity work.mux
		PORT MAP (
			-- input
 			w0 => c_data_pre_imm_mux,
			w1 => input_imm,
			s0 => control_alu_src,
			
			-- output
			f => input_2
		);

	-- ALU Port Map --------------------------------------------------------
	this_alu: entity work.alu
		PORT MAP (
			-- input
			a => input_1,
			b => input_2,
			s => control_alu_op,
			
			-- output
			r => result
		);
	
end Behavioral;

