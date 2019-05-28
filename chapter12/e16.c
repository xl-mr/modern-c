#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);
int *find_largest(int *arr, int n);

int main(void)
{
    int a[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }, i;

    for (i = 0; i < 3 ; i++) {
        printf("%d line find max = %d\n", i + 1, *find_largest(a[i], 3));
    }

    return 0;
}

bool search(const int a[], int n, int key)
{
    int *p;

    for (p = (int *)a; p < a + n; p++) {
        if (*p == key) {
            return true;
        }
    }

    return false;
}

int *find_largest(int *arr, int n)
{
    int i, max, j;
    
    j = 0;
    max = *(arr + j);
    for (i = 1; i < n; i++) {
        if (max < *(arr + i)) {
            max = *(arr + i);
            j = i;
        }
    }

    return arr + j;
}

