library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;


entity testbench is
end testbench;


architecture beh of testbench is
    signal a : std_logic_vector(0 to 3) := "0000";
    signal b : std_logic_vector(0 to 3) := "0000";
    signal q : std_logic_vector(0 to 3);
    constant tick : time := 1 us;
begin
    wide_or : entity work.or_word
    port map (
        a => a,
        b => b,
        q => q
    );

    drive_a : process
    begin
        wait for tick;
        a <= a + "0001";
    end process drive_a;

    drive_b : process
    begin
        wait for (tick*4);
        b <= b + "0001";
    end process drive_b;
end architecture beh;

