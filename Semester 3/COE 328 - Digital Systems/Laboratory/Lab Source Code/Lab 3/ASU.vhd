LIBRARY ieee ;
USE ieee.std_logic_1164.all ;
USE ieee.std_logic_unsigned.all ;

ENTITY Adder4 IS
    PORT ( Cin : IN STD LOGIC ;
        X, Y : IN STD LOGIC VECTOR(3 DOWNTO 0) ;
        S : OUT STD LOGIC VECTOR(3 DOWNTO 0) ;
        Cout, sym : OUT STD LOGIC ) ;
END Adder4 ;

ARCHITECTURE Behavior OF Adder4 IS
    SIGNAL Sum : STD LOGIC VECTOR(4 DOWNTO 0) ;

END Behavior

