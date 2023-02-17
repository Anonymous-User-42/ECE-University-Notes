#include <stdio.h>

double
aver (double x, double y)
{
	double ave;

	ave = (x + y) / 2.0;	/*	n1 & n2 are un-initialised variables in function "aver", instead "x" & "y" are initialised	*/

	return (ave);
}


int
main (void)
{
	double x, y, result;

	printf ("Enter a real number: ");
	scanf ("%lf", &x);

	printf ("Enter a real number: ");
	scanf ("%lf", &y);

	result = aver (x,y);

	printf ("The average is %lf.\n", result);
	
	return (0);
}
