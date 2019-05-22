#include <stdio.h>

int *find_largest(int *arr, int n);

int main(void)
{
    int arr[] = {10, 2, 3, 8, 22};

    int *p = find_largest(arr, 5);

    printf("max = %d\n", *p);

    return 0;
}

int *find_largest(int *arr, int n)
{
    int i, max, j;
    
    j = 0;
    max = arr[j];
    for (i = 1; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
            j = i;
        }
    }

    return arr + j;
}
