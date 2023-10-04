LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_unsigned.all;

ENTITY vhdl1 IS
    PORT(
        x1, x2, x3, x4: IN STD_logic;
        f: OUT STD_logic);
END vhdl1;

ARCHITECTURE Behavoir OF vhdl1 IS
BEGIN 
    f <= -- Some Function --;
END Behavoir;