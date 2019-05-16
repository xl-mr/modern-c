#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(void)
{
    double a[] = {1, 2};
    double b[] = {2, 3};

    printf("inner product %lf\n", inner_product(a, b, 2));

    return 0;
}

double inner_product(const double *a, const double *b, int n) 
{
    int i;
    double sum;

    sum = 0.00;
    for (i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }

    return sum;
}
