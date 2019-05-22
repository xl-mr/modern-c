#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
    int i = 1, j = 2;
    printf("swap before i = %d, j = %d\n", i, j);
    
    swap(&i, &j);

    printf("swap after i = %d, j = %d\n", i, j);

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
