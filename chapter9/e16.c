#include <stdio.h>

int fact(int n);


int main(void)
{
    printf("fact = %d\n", fact(5));

    return 0;
}

int fact(int n)
{
    return n <= 1 ? 1 : n * fact(n - 1);
}
