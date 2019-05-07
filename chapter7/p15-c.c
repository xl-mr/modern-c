#include <stdio.h>

int main(void)
{
    long n, total, i;

    printf("Enter a positive integer: ");
    scanf("%ld", &n);

    total = 1;
    for (i = 1; i <= n; i++) {
        total *= i;
    }

    printf("Factorial of %ld: %ld\n", n, total);

    return 0;
}
