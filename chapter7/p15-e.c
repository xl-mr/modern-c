#include <stdio.h>

int main(void)
{
    float n, total, i;

    printf("Enter a positive integer: ");
    scanf("%f", &n);

    total = 1;
    for (i = 1; i <= n; i++) {
        total *= i;
    }

    printf("Factorial of %f: %f\n", n, total);

    return 0;
}
