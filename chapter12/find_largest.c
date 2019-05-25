#include <stdio.h>

int find_largest(int *a, int n);

int main(void)
{
    int a[][5] = {
        {2,3,4,5,6},
        {7,8,9,0,30}
    };

    printf("max = %d\n", find_largest(a[0], 10));

    return 0;
}

int find_largest(int *a, int n)
{
    int i, max;

    max = a[0];
    for (i = 1; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }

    return max;
}
