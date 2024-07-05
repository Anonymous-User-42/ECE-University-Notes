#include <stdio.h>
#include <stdlib.h>
#include "mySort.h"

#define MAX_ARR_LENGTH 100000

int main(int argc, char * argv[]) {
    int arr_data[MAX_ARR_LENGTH];   /*  Array of ints to sort */
    int n_arr_data_items;   /*  Number of actual items in the array */

    if (argc > 1) {
        int i;  /*  Iterator variable*/
        for(i = 0; i < argc - 1; i++) {
            arr_data[i] = atoi(argv[i + 1]);
        }
        n_arr_data_items = i;
    } else {    //  Hard-Coded Data Entries
        arr_data[0] = 20;   //10;
        arr_data[1] = 40;   //20;
        arr_data[2] = 10;   //30;
        arr_data[3] = 30;   //40;
        n_arr_data_items = 4;
    }

    mySort(arr_data, n_arr_data_items); //  Orignal func mySort() with no modifications

    /*  Check that the arr_data array is sorted. */
    for (int i = 0; i < n_arr_data_items - 1; i++) {
        if (arr_data[i] > arr_data[i + 1]) {
            fprintf(stderr, "Sort error: arr_data[%d] (= %d)"
                            " should be <= arr_data[%d] (= %d)- -aborting\n",
                    i, arr_data[i], i + 1, arr_data[i + 1]);
            exit(1);
        }
    }

    /*  Print sorted array to stdout */
    for (int i = 0; i < n_arr_data_items; i++) {
        printf("%d\n", arr_data[i]);
    }

    exit(0);
}
