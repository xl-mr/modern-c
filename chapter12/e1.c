#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    printf("*(p + 3) = %d\n", *(p + 3)); // a[4] = 14;
    printf("*(q - 3) = %d\n", *(q - 3)); // a[2] = 34 

    printf("q - p = %ld\n", q - p);   // 5 - 1 = 4
    printf("p < q = %d\n", p < q); // 1 < 5 true = 1

    printf("*p < *q = %d\n", *p < *q); // 15 < 2 false = 0

    return 0;
}
