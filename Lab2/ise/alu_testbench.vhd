LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY alu_testbench IS
END alu_testbench;
 
ARCHITECTURE behavior OF alu_testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT alu
    PORT(
         a : IN  std_logic_vector(15 downto 0);
         b : IN  std_logic_vector(15 downto 0);
         s : IN  std_logic_vector(1 downto 0);
         r : OUT  std_logic_vector(15 downto 0);
         cout : OUT  std_logic;
         less_than : OUT  std_logic;
         equal_to : OUT  std_logic;
         greater_than : OUT  std_logic;
         overflow : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(15 downto 0) := (others => '0');
   signal b : std_logic_vector(15 downto 0) := (others => '0');
   signal s : std_logic_vector(1 downto 0) := (others => '0');

 	--Outputs
   signal r : std_logic_vector(15 downto 0);
   signal cout : std_logic;
   signal less_than : std_logic;
   signal equal_to : std_logic;
   signal greater_than : std_logic;
   signal overflow : std_logic;
 
   constant tick : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alu PORT MAP (
          a => a,
          b => b,
          s => s,
          r => r,
          cout => cout,
          less_than => less_than,
          equal_to => equal_to,
          greater_than => greater_than,
          overflow => overflow
        );

   -- Stimulus process
   drive : process
   begin		
		-- test a + b ---------------------------
      a <= "1000000000000000"; -- overflow
		b <= "1000000000000000";
		
		wait for (tick);
		a <= "0111111111111111"; -- overflow
		b <= "0111111111111111";
		
		wait for (tick);
		a <= "0111111111111111";
		b <= "0100000000000000";
		
		wait for (tick);
		a <= "0000000000000000"; 
		b <= "1111111111111111";
		
		wait for (tick);
		
		-- test a - b ---------------------------
		s <= "01";
		a <= "1000000000000000"; -- overflow
		b <= "0001111111111111";
		
		wait for (tick);
		a <= "1000000000000000"; -- overflow
		b <= "0000000000000100";
		
		wait for (tick);
		a <= "1000000011111111";
		b <= "0000000000000000";
		
		wait for (tick);
		a <= "0000000001111111";
		b <= "0000000000011111";
		
		wait for (tick);
		
		-- test a AND b -------------------------
		s <= "10";
		a <= "0000000011111111";
		b <= "0000000000000001";
		
		wait for (tick);
		a <= "0000000000000000";
		b <= "0000000000000010";
		
		wait for (tick);
		a <= "0000000011111111";
		b <= "0000000000000000";
		
		wait for (tick);
		a <= "0000000000000000";
		b <= "1111111111111111";
		
		wait for (tick);
		
		-- test a OR b --------------------------
		s <= "11";
		a <= "0000000000000001";
		b <= "0000000000000001";
		
		wait for (tick);
		a <= "0000000000000000";
		b <= "0000000000000010";
		
		wait for (tick);
		a <= "0000000000000000";
		b <= "0000000000000000";
		
		wait for (tick);
		a <= "0000000000000000";
		b <= "1111111111111111";
		
		wait for (tick);
   end process drive;

END;
