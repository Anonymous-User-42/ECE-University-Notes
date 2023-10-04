LIBRARY ieee ;
USE ieee.std_logic_1164.all ;
USE ieee.std_logic_unsigned.all ;

ENTITY adder4 IS
    PORT ( Cin : IN STD LOGIC ;
        X, Y : IN STD LOGIC VECTOR(3 DOWNTO 0) ;
        S : OUT STD LOGIC VECTOR(3 DOWNTO 0) ;
        Cout, Overflow : OUT STD LOGIC ) ;
END adder4 ;

ARCHITECTURE Behavior OF adder4 IS
    SIGNAL Sum : STD LOGIC VECTOR(4 DOWNTO 0) ;

BEGIN
PROCESS (Cin,X,Y)
BEGIN
	if (Cin <= '1') then 
		Sum <= ('0' & X) + ('0' & Y);
		S <= Sum(3 DOWNTO 0);
		Cout <= '1';
		neg <='0';
	end if;
	if (Cin <= '0') then
		if (X>Y) then
			Sum <= ('0' & X) - ('0' & Y);
			Cout <= '0';
			neg <='0';
		else
			Sum <= ('0' & Y) - ('0' & X);
			Cout <= '1';
			neg <='1';
		end if;
	end if;

	
END PROCESS;


BEGIN
    Sum < = ('0' & X) + ('0' & Y) + Cin ;
    S < = Sum(3 DOWNTO 0) ;
    Cout < = Sum(4) ;
    Overflow < = Sum(4) XOR X(3) XOR Y(3) XOR Sum(3) ;
END Behavior

