#include <stdio.h>

int main(void)
{
    long double n, total, i;

    printf("Enter a positive integer: ");
    scanf("%Lf", &n);

    total = 1;
    for (i = 1; i <= n; i++) {
        total *= i;
    }

    printf("Factorial of %Lf: %Lf\n", n, total);

    return 0;
}
