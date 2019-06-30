#include <stdio.h>
#include <stdlib.h>

#define N 5

typedef int arr[N];
typedef arr *Fcn_ptr;
typedef Fcn_ptr Fcn(int);

static int arr1[N] = {1,3,3,4,5};

int (*my_arr(int n))[N] {
    int i; 
    for (i = 0; i < N; i++) {
        arr1[i] *= n;
    }

    return &arr1;
}

int main(void)
{
    int i;
    my_arr(2);

    for (i = 0; i < N; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    return 0;
}
