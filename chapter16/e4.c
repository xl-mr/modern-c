#include <stdio.h>

typedef struct complex {
    double real;
    double imaginary;
} complex;

complex make_complex(double x, double y);
complex add_complex(complex x, complex y);

int main(void)
{
    complex c1, c2, c3;
    c1 = make_complex(1.0, 1.0);
    c2 = make_complex(2.0, 2.0);

    c3 = add_complex(c1, c2);
    
    printf("c.real = %lf, c.imaginary = %lf\n", c3.real, c3.imaginary);

    return 0;
}

complex make_complex(double x, double y)
{
    complex c;
    c.real = x;
    c.imaginary = y;

    return c;
}

complex add_complex(complex x, complex y)
{
    complex c;
    c.real = x.real + y.real;
    c.imaginary = x.imaginary + y.imaginary;

    return c;
}
