#include <stdio.h>

double	/*	Function type casting of integer type, instead should be floating type (double / float) to calculate floating point prescion values	*/
aver (double n1, double n2)
{	/*	Function initiation parantheses missing	*/
	double ave;

	ave = (n1 + n2) / 2.0;

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
