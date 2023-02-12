/*  Program to Calculate the Overall grades of a Course */

#include <stdio.h>
#include <math.h>

float quiz(void);
float midterm(void);
float final(void);
float conditional_output(float quiz, float midterm, float final);

void main(void)
{
    float q = quiz();
    float m = midterm();
    float f = final();
    conditional_output(q, m, f);
}

float quiz(void)
{
    float quiz[10];
    float lowest;
    float sum = 0;

    printf("Enter your quiz marks (0 to 10):\n");
    for (int i = 0; i < 10; i++)
    {
        do
        {
            scanf("%f", &quiz[i]);
            printf("\n");
        } while (quiz[i] < 0 || quiz[i] > 10);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (quiz[i] < quiz[i+1])
        {
            lowest = quiz[i];
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        sum += quiz[i];
    }
    
    float average = (sum - lowest) / 9;

    return average;
}

float midterm(void)
{
    float marks;

    printf("Enter your midterm marks (0 to 100):\n");
    do 
    {
        scanf("%f", &marks);
        printf("\n");
    } while (marks < 0 || marks > 100);

    return marks;
}

float final(void)
{
    float marks;

    printf("Enter your final marks (0 to 100):\n");
    do 
    {
        scanf("%f", &marks);
        printf("\n");
    } while (marks < 0 || marks > 100);

    return marks;
}

float conditional_output(float quiz, float midterm, float final)
{
    quiz *= 0.25;

    if (midterm >= final)
    {
        midterm *= 0.35;
        final *= 0.4;
    }
    else
    {
        midterm *= 0.25;
        final *= 0.5;
    }

    float grade = quiz + midterm + final;

    printf("The overall grade of the course is %.2f%%\n", grade);
}