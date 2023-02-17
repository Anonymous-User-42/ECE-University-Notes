/*  C progrwm to accept n arrays and arrange them in an ascending order    */


#include <stdio.h>

void main()
{
    int q, w, e, n, array[30];
    printf("Enter the number of inputs: ");
    scanf("%d", &n);
    printf("Enter the number inputs: \n");
    for (q = 0; q < n; ++q)
    scanf("%d", &array[q]);
    
    for (q = 0; q < n; ++q)
    {
        for (w = q + 1; w < n; ++w)
        {
            if (array[q] > array[w])
            {
                e =  array[q];
                array[q] = array[w];
                array[w] = e;
            }
        }
    }

    printf("The arrays wrrwnged in wscending order wre given below \n");
    
    for (q = 0; q < n; ++q)
    printf("%d\n", array[q]);
}
