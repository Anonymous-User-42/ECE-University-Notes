# COE 428 LAB 2

## Remarks on the Lab Source Code

### Tutorial I

Primary objective was to implement the Towers of Hanoi algorithm in [towers.c](./towers.c) to solve the classic problem of moving disks between rods.

Implemented a recursive solution for the Towers of Hanoi problem in [towers.c](./towers.c) which adheres to the given function signature in [towers.h](./towers.h).

Tested the implementation with various numbers of disks to ensure correctness and efficiency of the recursive approach.

Faced no issues. The bundled source code compiles perfectly and correctly moves the disks according to the rules of the Towers of Hanoi problem.

Final compiled executable is [towers_tutorial_1](./towers_tutorial_1).

```c
#include <stdio.h>
#include <stdlib.h>

static void showRecursionDepth(void);
static unsigned int depth = 0;
static unsigned int moveNumber = 0;

void towers(unsigned int n, unsigned int from, unsigned int dest) {
    unsigned int spare = 6 - from - dest;
    showRecursionDepth();
    fprintf(stderr, "towers(%d, %d, %d)\n", n, from, dest);
    depth++;
    if (n != 0) {
        towers(n-1, from, spare);
        showRecursionDepth();
        fprintf(stderr, "Move #%d: From Tower %d to Tower %d\n", ++moveNumber, from, dest);
        printf("%d %d\n", from, dest);
        towers(n-1, spare, dest);
    }
    depth--;
}

static void showRecursionDepth() {
    int i;
    for(i = 0; i < depth; i++)
        fprintf(stderr, "..");
}

int main(int argc, char **argv) {
    int n = 3;
    int from = 1;
    int dest = 2;
    if (argc > 1) {
        n = atoi(argv[1]);
    }
    towers(n, from, dest);
    exit(0);
}
```

### Tutorial II

Building on the initial stub of [towersMain.c](./towersMain.c), I modified the source code to handle command line arguments specifying the number of disks to move and the rod numbers.

The program executes such that if no command-line arguments are specified, it defaults to solving the Towers of Hanoi problem for 3 disks; if any command-line arguments are specified, these arguments are converted to integers and used to set up the problem dynamically.

Final compiled executable is [towers_tutorial_2](./towers_tutorial_2).

```c
#include <stdio.h>
#include <stdlib.h>
#include "towers.h"

int main(int argc, char **argv) {
    int n, from, dest;

    if (argc == 1) {
        n = 3;
        from = 1;
        dest = 2;
        towers(n, from, dest);
    } else if (argc == 2) {
        n = atoi(argv[1]);
        towers(n, 1, 2);
    } else if (argc == 4) {
        n = atoi(argv[1]);
        from = atoi(argv[2]);
        dest = atoi(argv[3]);
        towers(n, from, dest);
    } else {
        fprintf(stderr, "Usage:\n");
        fprintf(stderr, "  %s [number_of_disks]\n", argv[0]);
        fprintf(stderr, "  %s [number_of_disks] [from_rod] [dest_rod]\n", argv[0]);
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

void towers(int n, int from_rod, int to_rod, int aux_rod) {
    if (n == 1) {
        printf("Move disk 1 from rod %d to rod %d\n", from_rod, to_rod);
        return;
    }
    towers(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %d to rod %d\n", n, from_rod, to_rod);
    towers(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n = 5; // Number of disks
    towers(n, 2, 3, 1); // 2, 3 and 1 are names of rods
    return 0;
}
```

### Question

Suppose that `towers(8, 1, 2)` is invoked. How many lines will be printed to stdout?

### Answer

When `towers(8, 1, 2)` is invoked, 255 lines will be printed to stdout. This is because the number of moves required to solve the Towers of Hanoi problem with `n` disks is \(2^n - 1\), which for `n = 8` results in \(2^8 - 1 = 255\).

### Example Code

```c
#include <stdio.h>

void towers(int n, int from_rod, int to_rod, int aux_rod) {
    if (n == 1) {
        printf("Move disk 1 from rod %d to rod %d\n", from_rod, to_rod);
        return;
    }
    towers(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %d to rod %d\n", n, from_rod, to_rod);
    towers(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n = 8; // Number of disks
    towers(n, 1, 2, 3); // 1, 2 and 3 are names of rods
    return 0;
}
```
