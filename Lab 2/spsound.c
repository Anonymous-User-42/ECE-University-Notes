/*  Program to Calculate the speed of sound given some Temperature Input    */

#include <stdio.h>
#include <math.h>

void spsound(void);

int main(void)
{
    spsound();
}

void spsound(void)
{
    /*  Celcius temperature input   */
    double celsius;
    printf("Enter the Temperature of Air: ");
    scanf("%lf", &celsius);

    /*  Celsius to Fahrenheit Conversion    */
    double fahrenheit = ((celsius * 9) / 5) + 32;

    /*  Speed of Air calculation    */
    double speed = 1086 * sqrt((5 * fahrenheit + 297) / 247);

    /*  ft/s to km/h Conversion of speed    */
    speed = speed * 1.09728;

    /*  Printing the speed as the function output*/
    printf("\nThe Speed of the Air at %.3lf Celsius is %.3lf km/h\n", celsius, speed);
}


