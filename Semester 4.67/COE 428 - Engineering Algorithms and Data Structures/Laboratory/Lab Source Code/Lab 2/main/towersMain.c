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
        fprintf(stderr, "Command    %s  has illegal/unspecified arguments and/or arguments bounds out of range\n", argv[0]);
        return 1;
    }
    return 0;
}

