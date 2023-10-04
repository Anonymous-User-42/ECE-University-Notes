LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_unsigned.all;

ENTITY vhdl2 IS
    PORT(
        w1,w2,w3,w4: IN STD_logic;
        g,h: OUT STD_logic);
END vhdl2;

ARCHITECTURE Behavoir OF vhdl2 IS
BEGIN 
    g <= (w1 and w2) or (w3 and w4);
    h <= (w1 and w3) or (w2 and w4);
END Behavoir;