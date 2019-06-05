#include <stdio.h>

struct complex {
    double real;
    double imaginary;
};

struct complex make_complex(double x, double y);
struct complex add_complex(struct complex x, struct complex y);

int main(void)
{
    struct complex c1, c2, c3;
    c1 = make_complex(1.0, 1.0);
    c2 = make_complex(2.0, 2.0);

    c3 = add_complex(c1, c2);
    
    printf("c.real = %lf, c.imaginary = %lf\n", c3.real, c3.imaginary);

    return 0;
}

struct complex make_complex(double x, double y)
{
    struct complex c;
    c.real = x;
    c.imaginary = y;

    return c;
}

struct complex add_complex(struct complex x, struct complex y)
{
    struct complex c;
    c.real = x.real + y.real;
    c.imaginary = x.imaginary + y.imaginary;

    return c;
}
