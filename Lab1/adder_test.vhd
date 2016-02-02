LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.std_logic_unsigned.all;
 
ENTITY adder_test IS
END adder_test;
 
ARCHITECTURE behavior OF adder_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT adder
    PORT(
         a : IN  std_logic_vector(15 downto 0);
         b : IN  std_logic_vector(15 downto 0);
         cin : IN  std_logic;
         sum : OUT  std_logic_vector(15 downto 0);
         cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(15 downto 0) := (others => '0');
   signal b : std_logic_vector(15 downto 0) := (others => '0');
   signal cin : std_logic := '0';

 	--Outputs
   signal sum : std_logic_vector(15 downto 0);
   signal cout : std_logic;
	
	--Clock
   constant tick : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: adder PORT MAP (
          a => a,
          b => b,
          cin => cin,
          sum => sum,
          cout => cout
        );

   -- Stimulus process
	drive_a : process
		 begin
		 wait for (tick*4);
		 a<= (not a);
		 end process drive_a;
	 
		 drive_b : process
		 begin
		 wait for (tick*2);
		 b<= (not b);
		 end process drive_b;
	 
		 drive_cin : process
		 begin
		 wait for tick;
		 cin<= (not cin);
		 end process drive_cin;

END;
