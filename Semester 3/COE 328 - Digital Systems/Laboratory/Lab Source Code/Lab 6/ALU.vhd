library library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
use IEEE.numeric_std.all;

entity ALU is
    port(
        Clock: in std_logic;
        A, B: in std_logic_unsigned(7 downto 0);
        studentId: in std_logic_unsigned(3 downto 0);
        oP: in std_logic_unsigned(15 downto 0);
        neg: out std_logic;
        R1: out std_logic_unsigned(3 downto 0);
        R2: out std_logic_unsigned(3 downto 0);
    )
end ALU;

architecture calculation of ALU is
    signal reg1, reg2, result: std_logic_unsigned(7 downto 0) := (others => '0');
    signal reg3: std_logic_unsigned(0 to 7);
    begin
        reg1 <= A;
        reg2 <= B;
        process(Clock, oP)
        begin
            if(rising_edge(Clock)) then 
            case oP is
                when "?" =>
                ?
                when "?" =>
                ?
                when "?" =>
                ?
                when "?" =>
                ?
                when "?" =>
                ?
                when "?" =>
                ?
                when "?" =>
                ?
                when "?" =>
                ?
                when "?" =>
                ?
                when "?" =>
                ?
            end case;
        end if;
    end process;
    R1 <= result(3 downto 0);
    R2 <= result(7 downto 4);
end calculation;

