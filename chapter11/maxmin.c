#include <stdio.h>

#define N 10

void maxmin(int *arr, int n, int *max, int *min);

int main(void)
{
    int arr[N], i, big, small;

    printf("Enter 10 numbers:");
    for (i = 0; i < N; i++) {
        scanf("%d", arr + i);
    }
    maxmin(arr, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void maxmin(int *arr, int n, int *max, int *min)
{
    int i;

    *max = *min = arr[0];
    for (i = 0; i < n; i++) {
        if (*max < arr[i]) {
            *max = arr[i];
        } else if (*min > arr[i]) {
            *min = arr[i];
        }
    }
}
