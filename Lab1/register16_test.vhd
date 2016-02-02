  LIBRARY ieee;
  USE ieee.std_logic_1164.ALL;

  ENTITY register16_test IS
  END register16_test;

  ARCHITECTURE behavior OF register16_test IS 

  -- Component Declaration
          COMPONENT register16
          PORT(	D		: in 	std_logic_vector(15 downto 0);
						Aclr	: in 	std_logic;
						Clk	: in 	std_logic;
						Q		: out std_logic_vector(15 downto 0));
          END COMPONENT;
--Inputs
   signal D 	: std_logic_vector(15 downto 0) := (others => '0');
   signal Aclr : std_logic := '0';
   signal Clk	: std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(15 downto 0);
	
	--Clock
   constant tick : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: register16 PORT MAP (
          D => D,
          Aclr => Aclr,
          Clk => Clk,
          Q => Q
        );

   -- Stimulus process
	drive_D : process
		 begin
		 wait for (tick*4);
		 D<= (not D);
		 end process drive_D;
	 
	drive_Aclr : process
		 begin
		 wait for (tick*2);
		 Aclr<= (not Aclr);
		 end process drive_Aclr;
	 
	drive_Clk : process
		 begin
		 wait for tick;
		 Clk<= (not Clk);
		 end process drive_Clk;

END;
