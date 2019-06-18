#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value);

int main(void)
{
    int *arr,i;
    arr = create_array(10, 10);

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

int *create_array(int n, int initial_value)
{
    int i, *arr;

    arr = (int *)malloc(sizeof(int) * n);
    if (NULL == arr) {
        return NULL;
    }
    for (i = 0; i < n; i++) {
        arr[i] = initial_value;
    }

    return arr;
}
