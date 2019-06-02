#include <stdio.h>

#define DOUBLE(x) 2*x

#define MY_DOUBLE(x) (2 * (x))

int main(void)
{
    printf("double(1 + 2) = %d\n", DOUBLE(1 + 2)); // 2 * 1 + 2 = 4

    printf("4/double(2) = %d\n", 4 / DOUBLE(2)); // 4 / 2 * 2 = 4

    return 0;
}
