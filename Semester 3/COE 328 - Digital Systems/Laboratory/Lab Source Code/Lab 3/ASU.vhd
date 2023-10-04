LIBRARY ieee ;
USE ieee.std_logic_1164.all ;
USE ieee.std_logic_unsigned.all ;

ENTITY Adder4 IS
    PORT ( Cin : IN STD_LOGIC ;
        X, Y : IN STD_LOGIC_VECTOR(3 DOWNTO 0) ;
        S : OUT STD_LOGIC_VECTOR(3 DOWNTO 0) ;
        Cout, sym : OUT STD_LOGIC ) ;
END Adder4 ;

ARCHITECTURE Behavior OF Adder4 IS
    SIGNAL Sum : STD_LOGIC_VECTOR(4 DOWNTO 0) ;
BEGIN PROCESS (Cin, X, Y)
    BEGIN
        IF (Cin <= "1") THEN
            Sum <= ("0" & X) + ("0" & Y);
            S <= Sum(3 DOWNTO 0);
            Cout <= "1";
            sym <= "0";
        ELSE IF (Cin <= "0") THEN
            IF (X > Y) THEN
                Sum <= ("0" & X) - ("0" & Y);
                Cout <= "0";
                sym <= "0";
            ELSE
                Sum <= ("0" & Y) - ("0" & X);
                Cout <= "1";
                sym <= "1"
END PROCESS;
END Behavior

