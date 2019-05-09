#include <stdio.h>

#define N 40

int main(void)
{
    int i;
    int fib_number[N] = {0, 1};

    for (i = 2; i < N; i++) {
        fib_number[i] = fib_number[i - 1] + fib_number[i - 2];
    }

    for (i = 0; i < N; i++) {
        printf("%d ", fib_number[i]);
    }
    printf("\n");

    return 0;
}
