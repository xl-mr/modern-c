#include <stdio.h>

long power(int base, int n);
long expr(int x);

int main(void)
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("expr = %ld\n", expr(num));
    
    return 0;
}

long power(int base, int n)
{
    int i, product;
    
    product = 1;
    for (i = 0; i < n; i++) {
        product *= base;
    }

    return product;
}

long expr(int x)
{
    return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * power(x, 1) - 6;
}
