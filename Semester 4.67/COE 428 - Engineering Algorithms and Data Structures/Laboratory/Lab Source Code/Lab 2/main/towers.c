#include <stdio.h>
#include "towers.h"

void towers(unsigned int n, unsigned int from, unsigned int dest) {
    unsigned int spare = 6 - from - dest;
    if (n != 0) {
        towers(n - 1, from, spare);
        printf("%d %d\n", from, dest);
        towers(n - 1, spare, dest);
    }
}

