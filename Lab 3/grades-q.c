/*  Program to Calculate the Overall grades of a Course */

#include <stdio.h>
#include <math.h>

void main(void)
{
    float quiz_marks[10];
    float lowest;
    float sum = 0;

    /*  Scanning values for Quiz    */

    printf("Enter your quiz_marks marks (0 to 10):\n");
    for (int i = 0; i < 10; i++)
    {
        do
        {
            scanf("%f", &quiz_marks[i]);
            printf("\n");
        } while (quiz_marks[i] < 0 || quiz_marks[i] > 10);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (quiz_marks[i] < quiz_marks[i+1])
        {
            lowest = quiz_marks[i];
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        sum += quiz_marks[i];
    }
    
    float quiz = (sum - lowest) / 9;

    /*  Scanning values for Midterm */

    float midterm_marks;

    printf("Enter your midterm marks (0 to 100):\n");
    do 
    {
        scanf("%f", &midterm_marks);
        printf("\n");
    } while (midterm_marks < 0 || midterm_marks > 100);

    /*  Scanning values for Final   */

    float final_marks;

    printf("Enter your final marks (0 to 100):\n");
    do 
    {
        scanf("%f", &final_marks);
        printf("\n");
    } while (final_marks < 0 || final_marks > 100);

    /*  Conidtional Statements  */

    quiz *= 0.25;

    if (midterm_marks >= final_marks)
    {
        midterm_marks *= 0.35;
        final_marks *= 0.4;
    }
    else
    {
        midterm_marks *= 0.25;
        final_marks *= 0.5;
    }

    float grade = quiz + midterm_marks + final_marks;   /*  Grade calculation   */

    printf("The overall grade of the course is %.2f\n", grade);
}
