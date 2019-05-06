#include <stdio.h>

int main()
{
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    printf("c * i = %d\n", c * i); // -3 * 1 = -3
    printf("f / c = %f\n", f / c); // 6.5f / 1 = 6.5f
    printf("f - d = %lf\n", f - d); // 6.5f - 7.5 = -1

    printf("s + m = %ld\n", s + m); // 2 + 5 = 7
    printf("d / s = %lf\n", d / s); // 7.5 / 2 = 3.75
    printf("(int)f = %d\n", (int)f); // (int)6.5f = 6

    return 0;
}
