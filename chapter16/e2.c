#include <stdio.h>

struct c {
    double real;
    double imaginary;
};

int main(void)
{
    // a
    struct c c1 = {0.0, 1.0};
    struct c c2 = {1.0, 0.0};
    struct c c3;

    //b
    c1 = c2;
    
    c3.real = c1.real + c1.real;
    c3.imaginary = c2.imaginary + c2.imaginary;

    printf("c3.real = %lf, c3.imaginary = %lf\n", c3.real, c3.imaginary);
    
    return 0;
}
