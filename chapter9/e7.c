#include <stdio.h>

int f(int a, int b);

int main(void)
{
    int i;
    double x;

    i = f (83, 12);
    x = f (83, 12);
    printf("i= %d, x = %.2lf\n", i , x);

    i = f(3.15, 9.28);
    x = f(3.15, 9.28);
    printf("i= %d, x = %.2lf\n", i , x);

    return 0;
}

int f(int a, int b)
{
    return a + b;
}
