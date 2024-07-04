#include <stdio.h>
#include <stdlib.h>
#include "mySort.h"

int main()

{
    int arr_data[100000];   /*  Array of ints to sort */

    int n_arr_data_items;   /*  Number of actual items in the array */

    /* Test arr_data */

    n_arr_data_items = 4;

    arr_data[0] = 20;//10;

    arr_data[1] = 40;//20;

    arr_data[2] = 10;//30;

    arr_data[3] = 30;//40;

    mySort(arr_data, n_arr_data_items);

    /*  Check that the arr_data array is sorted. */

    for (int i = 0; i < n_arr_data_items - 1; i++)
    {
        if (arr_data[i] > arr_data[i + 1])
        {
            fprintf(stderr, "Sort error: arr_data[%d] (= %d)"
                            " should be <= arr_data[%d] (= %d)- -aborting\n",
                    i, arr_data[i], i + 1, arr_data[i + 1]);
            exit(1);
        }
    }

    /*  Print sorted array to stdout */

    for (int i = 0; i < n_arr_data_items; i++)
    {
        printf("%d\n", arr_data[i]);
    }

    exit(0);
}
