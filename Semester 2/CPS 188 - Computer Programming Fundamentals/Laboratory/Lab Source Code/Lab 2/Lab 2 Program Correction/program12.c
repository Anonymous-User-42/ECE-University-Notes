#include <stdio.h>

double
aver (double n1, double n2)
{
	double ave;

	ave = (n1 + n2) / 2.0;

	return (ave);
}


int
main (void)
{
	double x, y, result;

	printf ("Enter a real number: ");
	scanf ("%lf", &x);	/*	Undefined "%2.2lf" used as a placeholder for scanning of floating point values	*/

	printf ("Enter a real number: ");
	scanf ("%lf", &y);	/*	Undefined "%2.2lf" used as a placeholder for scanning of floating point values	*/

	result = aver (x,y);

	printf ("The average is %lf.\n", result);
	
	return (0);
}
