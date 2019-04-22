#include <stdio.h>

#define TAX 0.05f

int main()
{
    float amount, taxed;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    taxed = amount + amount * TAX;
    printf("With tax added: %.2f\n", taxed);

    return 0;
}
