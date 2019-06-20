#include <stdio.h>
#include <stdlib.h>

#define N 100

int compare(const void *, const void *);

int main(void)
{
    int i, arr[N];

    for (i = 0; i < N; i++) {
        arr[i] = random() % 100 + 1;
    }

    printf("sort before: ");
    for (i = 50; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    qsort(arr + 50, 50, sizeof(int), compare);

    printf("sort after: ");
    for (i = 50; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int compare(const void *a, const void *b)
{
    return *(const int *)a - *(const int *)b;
    /*if(*(int *)a > *(int *)b) {
        return 1;
    } else if (*(int *)a < *(int *)b) {
        return -1;
    } else {
        return 0;
    }*/
}

