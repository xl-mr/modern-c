#include <stdio.h>

struct node {
    int a;
} x = {10};

int main(void)
{
    printf("(&x)->a = %d\n", (&x)->a);
    printf("x.a = %d\n", x.a);

    return 0;
}
