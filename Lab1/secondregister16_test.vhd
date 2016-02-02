LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY secondregister16_test IS
END secondregister16_test;
 
ARCHITECTURE behavior OF secondregister16_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT D_flip_flop
    PORT(
         D : IN  std_logic;
         Aclr : IN  std_logic;
         Clk : IN  std_logic;
         Q : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal D : std_logic := '0';
   signal Aclr : std_logic := '0';
   signal Clk : std_logic := '0';

 	--Outputs
   signal Q : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: D_flip_flop PORT MAP (
          D => D,
          Aclr => Aclr,
          Clk => Clk,
          Q => Q
        );

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for Clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
