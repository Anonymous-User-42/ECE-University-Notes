/*  Program to Calculate the Temperature-Pressure relation for some Temperature and Pressure    */

#include <stdio.h>
#include <math.h>
#include <string.h>

float part_a(float initial_temperature, float initial_pressure, float final_pressure);
void part_b(float initial_temperature, float initial_pressure, float final_pressure, float max_temperature);

void main(void)
{
    float temp_i = 300;
    float pres_i = 50;
    float pres_f = 500;

    /*  Funtion to solve problem part a */
    float max_t = part_a(temp_i, pres_i, pres_f);

    /*  Funtion to solve problem part b */
    part_b(temp_i, pres_i, pres_f, max_t);
}

float part_a(float initial_temperature, float initial_pressure, float final_pressure)
{
    float max_temperature = (initial_temperature * final_pressure) / initial_pressure;
    printf("Maximum temperature the cylinder can withstand before bursting is %f\n", max_temperature);

    return max_temperature;
}

void part_b(float initial_temperature, float initial_pressure, float final_pressure, float max_temperature)
{
    int space = 4;

    /*  Header of the table */
    printf("Temperature (K)");
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
    printf("Pressure (atm)\n");

    /*  Margins */
    for (int i = 0; i < strlen("Temperature (K)"); i++)
    {
        printf("-");
    }
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < strlen("Pressure (atm)"); i++)
    {
        printf("-");
    }
    printf("\n");    

    /*  Contents of the table*/
    for (float temperature = initial_temperature; temperature < max_temperature; temperature += 100)
    {
        /*  Calculating iterative pressure*/
        float pressure = (initial_pressure * temperature) / initial_temperature;

        /*  Calculating & tabulating the temperature-pressure relation  */
        printf("%.2f", temperature);
        for (int i = 0; i < strlen("Temperature (K)") - 5 + space; i++)
        {
            printf(" ");
        }
        printf("%.2f", pressure);
        for (int i = 0; i < strlen("Pressure (atm)") - 4; i++)
        {
            printf(" ");
        }

        /*  Line termination print  */
        printf("\n");
    }
}
