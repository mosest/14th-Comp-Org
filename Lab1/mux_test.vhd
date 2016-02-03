LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY mux_test IS
END mux_test;
 
ARCHITECTURE behavior OF mux_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mux
    PORT(
         w0 : IN  std_logic_vector(15 downto 0);
         w1 : IN  std_logic_vector(15 downto 0);
         w2 : IN  std_logic_vector(15 downto 0);
         w3 : IN  std_logic_vector(15 downto 0);
         s1 : IN  std_logic;
         s0 : IN  std_logic;
         f : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal w0 : std_logic_vector(15 downto 0) := (others => '0');
   signal w1 : std_logic_vector(15 downto 0) := (others => '0');
   signal w2 : std_logic_vector(15 downto 0) := (others => '0');
   signal w3 : std_logic_vector(15 downto 0) := (others => '0');
   signal s1 : std_logic := '0';
   signal s0 : std_logic := '0';

 	--Outputs
   signal f : std_logic_vector(15 downto 0);
   
	--Clock 
   constant tick : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mux PORT MAP (
          w0 => w0,
          w1 => w1,
          w2 => w2,
          w3 => w3,
          s1 => s1,
          s0 => s0,
          f => f
        );

   -- Stimulus process
	drive : process
		 begin
		 w0  <= "0000000000000000";
		 w1 <=  "1111111111111111";
		 w2 <=  "0101010101010101";
		 w3 <=  "0000000011111111";
		 
		 wait for (tick*3);
		 s0 <= '1';
		 wait for tick * 3;
		 s1 <= '1';
		 s0 <= '0';
		 wait for tick * 3;
		 
		 s0 <= '1';
		 wait for tick *3;
		 end process drive;
		 
	
	
END;
