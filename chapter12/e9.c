#include <stdio.h>

double inner_product(double *a, double *b, int n);

int main(void)
{
    double a[] = {4.5, 5.5};
    double b[] = {6.5, 5.5};

    printf("sum = %lf\n", inner_product(a, b, 2));

    return 0;
}

double inner_product(double *a, double *b, int n)
{
    double sum, *p, *q;

    sum = 0.00;
    for (p = a, q = b; p < a + n && q < b + n; p++, q++) {
        sum += (*p + *q);
    } 

    return sum;
}
