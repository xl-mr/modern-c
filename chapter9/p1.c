#include <stdio.h>

#define N 6

void selection_sort(int *arr, int n);
void swap(int *a, int *b);

int main(void)
{
    int i, arr[N];   

    printf("Enter multi numbers: ");
    for (i = 0; i < N; i++) {
        scanf("%d", arr + i);
    }

    selection_sort(arr, N);

    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

void selection_sort(int *arr, int n)
{
    int max, i;

    if (n == 0) {
        return;
    }

    max = 0; 
    for (i = 0; i < n; i++) {
        if (arr[max] < arr[i]) {
            max = i;
        }
    }

    swap(&arr[max], &arr[n - 1]);
    selection_sort(arr, n - 1);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
