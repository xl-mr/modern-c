#include <stdio.h>

int fact(int n);


int main(void)
{
    printf("fact = %d\n", fact(5));

    return 0;
}

int fact(int n)
{
    int i, sum;
    sum = 1;
    for (i = 1; i <= n; i++) {
        sum *= i;
    }

    return sum;
}
