#include <stdio.h>

int main(void)
{
    int n, total;
    int i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    total = 1;
    for (i = 1; i <= n; i++) {
        total *= i;
    }

    printf("Factorial of %d: %d\n", n, total);

    return 0;
}
