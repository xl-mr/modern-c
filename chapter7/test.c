#include <stdio.h>

int main()
{
    unsigned char y = -10;
    printf("%hhu\n", y);
    
    int dec = 64;
    int oct = 0100;
    int hex = 0x40;
    char s[] = "hello \x40wor\100ld.";

    printf("%d %d %d\n", dec, oct, hex);

    printf("%c %c %c\n", dec, oct, hex);

    printf("%s\n", s);

    unsigned char a = 2;
    unsigned char b = 255;
    unsigned char c = a + b;
    printf("%d\n", c);  // a + b 256 / 2^8 = 0

    char a1 = -128;
    char b1 = -126;
    char c1 = a1 + b1;
    printf("%d\n", c1);

    char a2 = 127;
    char b2 = 125;
    char c2 = a2 + b2;
    printf("%d\n", c2);

    short int sint = 100;
    printf("%hd\n", sint);

    return 0;
}
