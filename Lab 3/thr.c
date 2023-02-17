/*  Program to calculate the Training Heart Rate (THR)  */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

float inputs(void);
bool gender_conditional(char gender);
int male_training_heart_rate(int age, int resting_heart_rate, float fitness_level);
int female_training_heart_rate(int age, int resting_heart_rate, float fitness_level);
int conditional(char gender, int age, int resting_heart_rate, float fitness_level);
void output(int training_heart_rate);

void main(void)
{
    float g, a, rhr, fl = inputs();
    int thr = conditional(g, a, rhr, fl);
    output(thr);
}

float inputs(void)
{
    char gender;
    int age;
    int resting_heart_rate;
    float fitness_level;

    /*  Scanning values for gender selection    */
    printf("Please enter your gender, (M or F): ");
    do
    {
        scanf("%c", &gender);
    } while (gender == 'M' || gender == 'F');
    

    /*  Scanning values for the age */
    printf("\nPlease enter your age: ");
    scanf("%i", &age);

    /*  Scanning values for the resting heart rate  */
    printf("\nPlease enter your resting heart rate: ");
    scanf("%i", &resting_heart_rate);

    /*  Scanning values for fitness level   */
    printf("\nPlease enter your fitness level, (0.55 for low, 0.65 for medium, and 0.8 for high fitness): ");
    scanf("%f", &fitness_level);

    return gender, age, resting_heart_rate, fitness_level;
}

int conditional(char gender, int age, int resting_heart_rate, float fitness_level)
{
    /*  Conditional to check male or female */
    bool binary = gender_conditional(gender);

    /*  Conditional for check male or female THR    */
    int training_heart_rate;
    if (binary == true)
    {
        training_heart_rate = male_training_heart_rate(age, resting_heart_rate, fitness_level);
    }

    else
    {
        training_heart_rate = female_training_heart_rate(age, resting_heart_rate, fitness_level);
    }

    return training_heart_rate;
}

void output(int training_heart_rate)
{
    printf("\nYour training heaty rate is %i\n", training_heart_rate);
}

bool gender_conditional(char gender)
{
    int binary;
    if (gender == 'M')
    {
        binary = true;
    }

    else
    {
        binary = false;
    }
    
    return binary;
}

int male_training_heart_rate(int age, int resting_heart_rate, float fitness_level)
{
    /*  Calculating the maximum heart rate  */
    float maximum_heart_rate = 203.7 / (1 + exp(0.033 * (age - 104.3)));

    /*  Calculating the training heart rate */
    int training_heart_rate = (maximum_heart_rate - resting_heart_rate) * fitness_level + resting_heart_rate;

    return training_heart_rate;
}

int female_training_heart_rate(int age, int resting_heart_rate, float fitness_level)
{
    /*  Calculating the maximum heart rate  */
    int maximum_heart_rate = 190.2 / (1 + exp(0.0453 * (age - 107.5)));

    /*  Calculating the training heart rate */
    int training_heart_rate = (maximum_heart_rate - resting_heart_rate) * fitness_level + resting_heart_rate;

    return training_heart_rate;
}
