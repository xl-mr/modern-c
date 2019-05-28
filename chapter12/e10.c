#include <stdio.h>

int *find_middle(int *a, int n);

int main(void)
{
    int a[] = {1,2,3,4,5,6,7};

    printf("find_middle = %d\n", *find_middle(a, 7));

    return 0;
}

int *find_middle(int *a, int n)
{
    return a + (n / 2);
}
