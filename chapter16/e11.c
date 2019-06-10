#include <stdio.h>

struct {
    double a;
    union {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} s;

struct {
    double b;
    char a;
} s1;

int main(void)
{

    printf("sizeof(s) = %lu\n", sizeof(s)); 
    printf("sizeof(s1) = %lu\n", sizeof(s1)); 
    return 0;
}
