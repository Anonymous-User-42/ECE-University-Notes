LIBRARY ieee ;
USE ieee.std_logic_1164.all ;

ENTITY seg7 IS
    PORT ( 
        sum : IN STD_LOGIC_VECTOR(3 DOWNTO 0) ;
        sym : IN STD_LOGIC_VECTOR(3 DOWNTO 0) ;
        led1, led2 : OUT STD_LOGIC_VECTOR(1 TO 7) ) ;
END seg7 ;

ARCHITECTURE Behavior OF seg7 IS
BEGIN
    PROCESS ( sum, sym )
    BEGIN
        IF (sym = "0") THEN
            led2 <= ("0000000");
        ELSE IF (sym = "1") THEN
            led2 <= ("0000001");
        
        CASE sum IS         --      abcdefg
            WHEN "0000" => led1 <= "1111110" ;
            WHEN "0001" => led1 <= "0110000" ;
            WHEN "0010" => led1 <= "1101101" ;
            WHEN "0011" => led1 <= "1111001" ;
            WHEN "0100" => led1 <= "0110011" ;
            WHEN "0101" => led1 <= "1011011" ;
            WHEN "0110" => led1 <= "1011111" ;
            WHEN "0111" => led1 <= "1110000" ;
            WHEN "1000" => led1 <= "1111111" ;
            WHEN "1001" => led1 <= "1110011" ;
            WHEN OTHERS => led1 <= "-------" ;
        END CASE ;
    END PROCESS ;
END Behavior ;

