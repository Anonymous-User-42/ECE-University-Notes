/*  Right Triangle Hypotenuse, Perimeter & Area Calculating Program  */


#include <stdio.h>
#include <math.h>

double input(void);
void output(double base, double height);
double hypotenuse(double base, double height);
void perimeter(double base, double height, double hypotenuse);
void surface_area(double base, double height);

int main(void)
{
    double b, h = input();
    output(b, h);
}

double input(void)
{
    double base, height;
    printf("Enter the value of the base of the triangle: ");
    scanf("%lf", &base);
    printf("Enter the value of the height of the triangle: ");
    scanf("%lf", &height);
    
    return base, height;
}

void output(double base, double height)
{
    double hyp = hypotenuse(base, height);
    printf("\n");
    perimeter(base, height, hyp);
    printf("\n");
    surface_area(base, height);
}

double hypotenuse(double base, double height)
{
    double sq_sum = base * base + height * height;
    double hypotenuse = sqrt(sq_sum);
    printf("The value of the hypotenuse of the triangle is: %lf", hypotenuse);

    return hypotenuse;
}

void perimeter(double base, double height, double hypotenuse)
{
    double perimeter = base + height + hypotenuse;
    printf("The value of the perimeter of the triangle is: %lf", perimeter);
}

void surface_area(double base, double height)
{
    double surface_area = ( base * height ) / 2;
    printf("The value of the surface area of the triangle is: %lf", surface_area);
}
