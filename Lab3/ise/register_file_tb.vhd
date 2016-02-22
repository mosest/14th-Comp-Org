library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity register_file_tb is
end entity register_file_tb;


architecture mixed of register_file_tb is
    constant tick : time := 1 ns;
    signal a_data, b_data, c_data : std_logic_vector(15 downto 0);
    signal a_addr, b_addr, c_addr : std_logic_vector(3 downto 0) := "0000";
    signal load, clear, clk : std_logic;
    signal done : std_logic := '0';
begin
    uut : entity work.register_file
        port map(a_data, a_addr, b_data, b_addr,
                 c_data, c_addr, load, clear, clk);

    driver : process is
    begin
        a_data <= x"0000";
        load <= '0';
        wait for tick;

        -- check reset
        clear <= '0';
        for i in 0 to 15 loop
            b_addr <= std_logic_vector(conv_unsigned(i, 4));
            wait for tick/100;
            if (i /= 1 and b_data /= x"0000") or (i = 1 and b_data /= x"0001") then --b_data should be all 0s except for register 1
                report "RESET FAIL";
                exit;
            end if;
        end loop;
        clear <= '1';
        report "RESET COMPLETE";
        wait until falling_edge(clk);

        -- load a few registers
        load <= '1';

        a_addr <= x"5"; a_data <= x"FFFF"; b_addr <= x"5"; wait for tick; 
        if b_data = x"FFFF" then report "PASS"; else report "FAIL 1"; end if;

        a_addr <= x"F"; a_data <= x"CAFE"; c_addr <= x"F"; wait for tick;
        if c_data = x"CAFE" then report "PASS"; else report "FAIL 2"; end if; --checking write and read at address x"F"

        -- no change without load signal
        load <= '0';

        a_addr <= x"5"; a_data <= x"0000"; b_addr <= x"5"; wait for tick;
        if b_data = x"FFFF" then report "PASS"; else report "FAIL 3"; end if; --data at register x"5" should not change

        -- reg 0 and 1 are constant
        load <= '1';

        a_addr <= x"0"; a_data <= x"FFFF"; b_addr <= x"0"; wait for tick;
        if b_data = x"0000" then report "PASS"; else report "FAIL 4"; end if; --data in register 0 should not change

        a_addr <= x"1"; a_data <= x"FFFF"; c_addr <= x"1"; wait for tick;
        if c_data = x"0001" then report "PASS"; else report "FAIL 5"; end if; --data in register 1 should not change

        done <= '1';
        wait;
    end process driver;

    clock : process is
    begin
        while done = '0' loop
            clk <= '0'; wait for tick/2;
            clk <= '1'; wait for tick/2;
        end loop;
        wait;
    end process clock;
end architecture mixed;