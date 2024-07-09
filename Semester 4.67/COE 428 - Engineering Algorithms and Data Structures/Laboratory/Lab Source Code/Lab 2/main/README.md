# COE 428 LAB 2

## Remarks on the Lab Source Code

### Tutorial I

Primary objective was to implement the Towers of Hanoi algorithm in [towers.c](./towers.c) to solve the classic problem of moving disks between rods.

Implemented a recursive solution for the Towers of Hanoi problem in [towers.c](./towers.c) which adheres to the given function signature in [towers.h](./towers.h).

Tested the implementation with various numbers of disks to ensure correctness and efficiency of the recursive approach.

Faced no issues. The bundled source code compiles perfectly and correctly moves the disks according to the rules of the Towers of Hanoi problem.

### Tutorial II

Building on the initial stub of [towersMain.c](./towersMain.c), I modified the source code to handle command line arguments specifying the number of disks to move and the rod numbers.

The program executes such that if no command-line arguments are specified, it defaults to solving the Towers of Hanoi problem for 3 disks; if any command-line arguments are specified (up to 3 arguments, if more are specified, the program prints an error to `stderr`), these arguments are converted to integers and used to set up the problem dynamically.

Final compiled executable is [towers](./towers).

```c
#include <stdio.h>
#include <stdlib.h>
#include "towers.h"

int main(int argc, char **argv) {
    int n, from, dest;
    int arguments = argc - 1;

    if (arguments == 0) {
        n = 3;
        from = 1;
        dest = 2;
        towers(n, from, dest);
    } else if (arguments == 1) {
        n = atoi(argv[1]);
        towers(n, 1, 2);
    } else if (arguments == 3) {
        n = atoi(argv[1]);
        from = atoi(argv[2]);
        dest = atoi(argv[3]);
        towers(n, from, dest);
    } else {
        fprintf(stderr, "Error:\n");
        fprintf(stderr, "Command    %s  has illegal arguments and/or arguments bounds out of range\n", argv[0]);
        return 1;
    }
    return 0;
}
```

## Post-Tutorial Questions

### Question

Suppose that `towers(5, 2, 3)` is invoked.

1. How will the first recursive call to `towers()` be invoked? Answer this question in the form: `towers(x, y, z)` where you give the actual values to the three parameters.
2. How many recursive calls to `towers()` will be made before this first recursive call actually returns to the initial invocation?
3. Once `towers(5, 2, 3)` has invoked its first recursive call to `towers()` and this invocation has returned, what will be printed to stdout? (i.e. What actual move will be made by `towers(5, 2, 3)`?)
4. How will the second recursive call to `towers()` be invoked? Answer this question in the form: `towers(x, y, z)` where you give the actual values to the three parameters.

### Answer

1. The first recursive call to `towers(5, 2, 3)` will be invoked as `towers(4, 2, 1)`.
2. The number of recursive calls to `towers()` made before this first recursive call actually returns to the initial invocation is 15.
3. Once `towers(5, 2, 3)` has invoked its first recursive call to `towers()` and this invocation has returned, the move that will be printed to stdout is: `Move disk 5 from rod 2 to rod 3`.
4. The second recursive call to `towers(5, 2, 3)` will be invoked as `towers(4, 1, 3)`.

### Example Code

```c
#include <stdio.h>

void towers(int n, int from, int dest) {
    unsigned int spare = 6 - from - dest;
    if (n == 1) {
        printf("Move disk 1 from rod %d to rod %d\n", from, dest);
        return;
    } else {
        towers(n - 1, from, spare);
        printf("%d %d\n", from, dest);
        towers(n - 1, spare, dest);
    }
}

void main() {
    int n = 5; // Number of disks
    towers(n, 2, 3); // 2, 3 are names of rods
}
```

### Question

Suppose that `towers(8, 1, 2)` is invoked. How many lines will be printed to stdout?

### Answer

When `towers(8, 1, 2)` is invoked, 255 lines will be printed to stdout. This is because the number of moves required to solve the Towers of Hanoi problem with `n` disks is \(2^n - 1\), which for `n = 8` results in \(2^8 - 1 = 255\) lines.

### Example Code

```c
#include <stdio.h>

void towers(int n, int from, int dest) {
    unsigned int spare = 6 - from - dest;
    if (n == 1) {
        printf("Move disk 1 from rod %d to rod %d\n", from, dest);
        return;
    } else {
        towers(n - 1, from, spare);
        printf("%d %d\n", from, dest);
        towers(n - 1, spare, dest);
    }
}

void main() {
    int n = 8; // Number of disks
    towers(n, 1, 2); // 1, 2 are names of rods
}
```
