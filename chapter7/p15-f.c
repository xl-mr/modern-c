#include <stdio.h>

int main(void)
{
    double n, total, i;

    printf("Enter a positive integer: ");
    scanf("%lf", &n);

    total = 1;
    for (i = 1; i <= n; i++) {
        total *= i;
    }

    printf("Factorial of %lf: %lf\n", n, total);

    return 0;
}
