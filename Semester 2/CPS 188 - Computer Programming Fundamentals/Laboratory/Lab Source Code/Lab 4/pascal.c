/*  Program to print the values of the Pascal's Triangle in Sequential Order    */

#include <stdio.h>

void pascal(void);

void main(void)
{
    pascal();
}

void pascal(void)
{
    for (int i = 1; i <= 9; ++i)
       {
        
        int value = 1;
        
        for (int j = 1; j <= 9; ++j){
            
            if (value != 0){
            printf ("%d ", value);
            }
            
            value = value * (i-j)/j;
            
          }
            printf("\n");
       }
}