library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- D flip flop -------------------------------------------------------

entity D_flip_flop is
	PORT(	D		: in 	std_logic;
			Aclr	: in 	std_logic;
			Clk	: in 	std_logic;
			Q		: out std_logic);
end D_flip_flop;

architecture structure of D_flip_flop is
begin
	state_change: process(Clk, Aclr) is
	begin
		if Aclr = '1' then
			Q <= '0';
		elsif Clk'event and Clk = '1' then
			Q <= D;
		end if;
	end process state_change;
end structure;

-- register (combination of 16 D_flip_flops) ------------------------

entity register16 is
	PORT(	input	: in	std_logic_vector(15 downto 0);
			Aclr	: in 	std_logic;
			Clk	: in 	std_logic;
			Q		: out	std_logic_vector(15 downto 0));
end register16;

architecture behavioral of register16 is
	COMPONENT D_flip_flop
		PORT(	D		: in 	std_logic;
				Aclr	: in 	std_logic;
				Clk	: in 	std_logic;
				output: out std_logic);
	END COMPONENT;
begin
	DFF1:  D_flip_flop port map (input(0),  Aclr, Clk, Q(0));
	DFF2:  D_flip_flop port map (input(1),  Aclr, Clk, Q(1));
	DFF3:  D_flip_flop port map (input(2),  Aclr, Clk, Q(2));
	DFF4:  D_flip_flop port map (input(3),  Aclr, Clk, Q(3));
	DFF5:  D_flip_flop port map (input(4),  Aclr, Clk, Q(4));
	DFF6:  D_flip_flop port map (input(5),  Aclr, Clk, Q(5));
	DFF7:  D_flip_flop port map (input(6),  Aclr, Clk, Q(6));
	DFF8:  D_flip_flop port map (input(7),  Aclr, Clk, Q(7));
	DFF9:  D_flip_flop port map (input(8),  Aclr, Clk, Q(8));
	DFF10: D_flip_flop port map (input(9),  Aclr, Clk, Q(9));
	DFF11: D_flip_flop port map (input(10), Aclr, Clk, Q(10));
	DFF12: D_flip_flop port map (input(11), Aclr, Clk, Q(11));
	DFF13: D_flip_flop port map (input(12), Aclr, Clk, Q(12));
	DFF14: D_flip_flop port map (input(13), Aclr, Clk, Q(13));
	DFF15: D_flip_flop port map (input(14), Aclr, Clk, Q(14));
	DFF16: D_flip_flop port map (input(15), Aclr, Clk, Q(15));
end behavioral;