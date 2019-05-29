#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void)
{
    int i;
    int a[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int *p;

    for (i = 0; i < 3; i++) {
        for (p = a[i]; p < a[i] + 3; p++) {
            printf("%d ", *p);
        }
        printf("\n");
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
