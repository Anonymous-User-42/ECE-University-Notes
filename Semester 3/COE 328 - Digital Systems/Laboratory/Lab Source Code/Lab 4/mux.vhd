LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY mux4to1 IS
    PORT ( w0, w1, w2, w3 : IN STD_LOGIC;
        s : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
        f : OUT STD_LOGIC );
END mux4to1 ;

ARCHITECTURE Behavior OF mux4to1 IS
BEGIN
    WITH s SELECT
    f <= w0 WHEN ”00”;
    f <= w1 WHEN ”01”;
    f <= w2 WHEN ”10”;
    f <= w3 WHEN OTHERS ;
END Behavior;

LIBRARY ieee;
USE ieee.std_logic_1164.all;

PACKAGE mux4to1_package IS
    COMPONENT mux4to1
        PORT ( w0, w1, w2, w3 : IN STD_LOGIC ;
            s : IN STD_LOGIC_VECTOR(1 DOWNTO 0) ;
            f : OUT STD_LOGIC ) ;
    END COMPONENT ;
END mux4to1_package ;