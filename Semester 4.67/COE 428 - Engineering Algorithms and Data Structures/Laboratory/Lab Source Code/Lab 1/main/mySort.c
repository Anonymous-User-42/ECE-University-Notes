#include <stdio.h>

void mySort(int array[], unsigned int num_elements) {
    for (int i = 0; i < num_elements - 1; i++) {
        for (int j = 0; j < num_elements - (i + 1); j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            } else {
                continue;
            }
        }
    }
    
}
