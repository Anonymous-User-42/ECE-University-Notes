#include <stdio.h>

double
aver (double n1, double n2)
{
	double ave;

	ave = (n1 + n2) / 2.0;	/*	Function designed to calculate average of 2 numbers, Adherance to BODMAS is not defined*/

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
