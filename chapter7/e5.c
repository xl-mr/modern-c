#include <stdio.h>

int main()
{
    char a = 'A';
    unsigned int b = 0b1000001;
    unsigned int c = 0101;
    unsigned int d = 0x41;

    printf("%u %u %u %u\n", a, b, c, d);

    return 0;
}
