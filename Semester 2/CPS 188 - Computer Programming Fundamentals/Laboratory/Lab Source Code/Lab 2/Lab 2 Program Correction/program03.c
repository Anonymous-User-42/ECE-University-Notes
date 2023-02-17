#include <stdio.h>

double
aver (double n1, double n2)
{
	double ave;

	ave = (n1 + n2) / 2.0;

	return (ave);	/*	Incorrect calling of the orignal function instead of the variable to be returned	*/
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

	printf ("The average is %lf.\n", result);		/*	Incorrect calling of floating point placeholder prescion	*/
	
	return (0);
}
