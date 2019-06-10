#include <stdio.h>

enum dir {NORTH, SOUTH, EAST, WEST} direction;

int main(void)
{
    int i;

    for (i = NORTH; i <= WEST; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
