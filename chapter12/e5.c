#include <stdio.h>

int main(void)
{
    int a[] = {1,2,3};
    int *p = a;

    //printf("p == a[0] bool = %d\n", p == a[0]);
    printf("p == &a[0] bool = %d\n", p == &a[0]);
    printf("*p == a[0] bool = %d\n", *p == a[0]);
    printf("p[0] == a[0] bool = %d\n", p[0] == a[0]);

    return 0;
}
