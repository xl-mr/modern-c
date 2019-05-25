#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,0};

    printf("search find bool = %d\n", search(a, 10, 5));

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
