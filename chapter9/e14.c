#include <stdio.h>
#include <stdbool.h>

bool has_zero(int *arr, int n);

int main(void)
{
    int arr[4] = {0};
    int arr1[4] = {1, 3, 3, 4};
    int arr2[4] = {1, 0, 3, 4};

    int len = 4;

    printf("full zero %d\n", has_zero(arr, len));
    printf("not full zero %d\n", has_zero(arr1, len));
    printf("has zero at least %d\n", has_zero(arr2, len));

    return 0;
}

bool has_zero(int *arr, int n)
{
    int i;
    bool check = true;
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            check = false;
            break;
        }
    }

    return check;
}
