#include <stdio.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}

typedef unsigned long ULONG;

typedef unsigned long (*f)(ULONG, ULONG);

int main(void)
{
    f f1;
    GENERIC_MAX(ULONG);

    f1 = ULONG_max;

    printf("%ld\n", f1(5, 10));

    return 0;
}
