#include <stdio.h>

int sum_array(const int a[], int n);

int main(void)
{
    int a[] = {1,2};

    printf("sum_array = %d\n", sum_array(a, 2));

    return 0;
}

int sum_array(const int a[], int n)
{
    int *p, sum;

    sum = 0;

    for (p = (int *)a; p < a + n; p++) {
        sum += *p;
    }

    return sum;
}
