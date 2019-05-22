#include <stdio.h>

void find_two_largest(int *arr, int n, int *largest, int *second_largest);

int main(void)
{
    int arr[] = {1, 10, 3,4,9,7};
    int max = 0,second_max = 0;
    
    find_two_largest(arr, 6, &max, &second_max);
    printf("max = %d, second_max = %d\n", max, second_max);

    return 0;
}

void find_two_largest(int *arr, int n, int *largest, int *second_largest)
{
    int i;

    if (arr[0] > arr[1]) {
        *largest = arr[0];
        *second_largest = arr[1];
    } else {
        *largest = arr[1];
        *second_largest = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > *largest) {
            *second_largest = *largest;
            *largest = arr[i];
        } else if (arr[i] > *second_largest) {
            *second_largest = arr[i];
        }
    }
}
