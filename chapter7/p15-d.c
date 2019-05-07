#include <stdio.h>

int main(void)
{
    long long n, total, i;

    printf("Enter a positive integer: ");
    scanf("%lld", &n);

    total = 1;
    for (i = 1; i <= n; i++) {
        total *= i;
    }

    printf("Factorial of %lld: %lld\n", n, total);

    return 0;
}
