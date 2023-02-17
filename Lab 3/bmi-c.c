/*  Program to Calculate the Body Mass Index (BMI) of a person    */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double inputs(void);
void output(float weight, float height);

void main(void)
{
    float w, h = inputs();
    output(w, h);
}

/*  Multi-variable returning function   */
double inputs(void)
{
    float weight;
    float height;

    /*  Scanning values for weight  */
    printf("Enter your weight: ");
    scanf("%f", &weight);

    /*  Scanning values for height  */
    printf("\nEnter your height: ");
    scanf("%f", &height);

    return weight, height;
}

void output(float weight, float height)
{
    /*  Calculating BMI */
    height *= height;
    float body_mass_index = weight / (height);

    /*  Conditional */
    if (body_mass_index < 18.5)
    {
        printf("Your BMI value is %.1f, which classifies you as Underweight\n", body_mass_index);
    }
    else if (body_mass_index <= 24.9)
    {
        printf("Your BMI value is %.1f, which classifies you as Normal\n", body_mass_index);
    }
    else if (body_mass_index <= 29.9)
    {
        printf("Your BMI value is %.1f, which classifies you as Overweight\n", body_mass_index);
    }
    else
    {
        printf("Your BMI value is %.1f, which classifies you as Obese\n", body_mass_index);
    }
}
