#include <stdio.h>

int main(void)
{
    short n, total;
    int i;

    printf("Enter a positive integer: ");
    scanf("%hd", &n);

    total = 1;
    for (i = 1; i <= n; i++) {
        total *= i;
    }

    printf("Factorial of %hd: %hd\n", n, total);

    return 0;
}
