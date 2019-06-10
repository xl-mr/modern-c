#include <stdio.h>

union {
    double a;
    struct {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} u;

int main(void)
{
    printf("union sizeof(u) = %lu\n", sizeof(u));

    return 0;
}
