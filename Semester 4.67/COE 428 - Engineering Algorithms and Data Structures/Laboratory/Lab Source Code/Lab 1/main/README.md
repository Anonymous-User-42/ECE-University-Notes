#   COE 428 LAB 1

##  Remarks on the Lab Source Code

### Tutorial I

Primary objective was to implement a sorting algorithm in [mySort.c](./mySort.c) to sort through a given array of hard-coded set of integers.

Implemented a Bubble-Sort algorithm in [mySort.c](./mySort.c) which alignes to the same function signature given in [mySort.h](./mySort.h).

Changed the order of hard-coded values in the array so that, it is easier to test if the presented code solution works as it should.

Faced no issues. The bundled source code compiles perfectly while sorting the given array completely in a ascending order.

Final compiled executable is [sort_tutorial_1](./sort_tutorial_1).

### Tutorial II

Building on the initial stub of [sortMain.c](./sortMain.c), I modified the source code such, so that the command line arguments are to be utilized.

The program executes such that if, there are no command-line arguments specified, the array of integers is hard-coded to the orignal values; if any command-line arguments are specified, these arguments are converted to string and then assigned to the array so as to have a user-input based sorting program.

Final compiled executable is [sort_tutorial_2](./sort_tutorial_2).

##  Post-Tutorial Questions

### Question

Suppose you were given an object module (with no access to source code) that sorted an array of integers very efficiently. However, the sort function in the object module must be invoked with the following signature:

```C
betterSort(int data[], first, last);
```
where the array to sort is data and the parameters first and last give the indices of the portion of the array that is to be sorted.

How could you write a mySort() function with the signature used in this lab that could exploit the better sorting function in the supplied object module? 

### Answer

To write a sorting function with the same signature as [mySort.c](./mySort.c) such that it is a optimized sorting algorithm as: 
```C
betterSort(int data[], first, last);
```

We could first implement such an algorithm by first changing the indices at which the algorithm begins and terminates instead of looping through the whole array.

This behavior could be acheived if we initialize the for-loop iterator variable as the first index variable and to the for-loop termination condition with last + 1.

Because we are to implement mySort(...) with the same signature, we are limited to choose either first, or last as an input variable; I am proceeding forward with last as the chosen substitution with num_elements.

This is a better optimized form of mySort(...) as instead of the whole array length, we only loop till the index we are supposed to sort till.

Example Code:

```C
//  Implementing a inspired form of betterSort(int data[], first, last) with mySort(int array[], unsigned int num_elements) orignal signature that is more optimized than mySort(int array[], unsigned int num_elements) itself.
void mySort(int array[], unsigned int last_element_index) {
    for (int i = 0; i < last_element_index - 1; i++) {
        for (int j = 0; j < last_element_index - (i + 1); j++) {
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
```