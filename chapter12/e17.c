#include <stdio.h>

#define LEN 10;

int sum_two_dimensional_array(int *arr, int n);

int main(void)
{
    int arr[][2] = {
        {1,2},
        {2,3}
    };

    printf("sum_two_dimensional_array return value = %d\n", sum_two_dimensional_array(arr[0], 4));

    return 0;
}

int sum_two_dimensional_array(int *arr, int n)
{
    int sum = 0, *p;

    for (p = arr; p < arr + n; p++) {
        sum += *p;
    }

    return sum;
}
