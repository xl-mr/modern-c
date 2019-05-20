#include <stdio.h>

int i = 1;

void f(void)
{
    int j = i;
    int i = 2;

    printf("i = %d, j = %d\n", i, j);
}

int main(void)
{
    f();

    printf("i = %d\n", i);

    return 0;
}
