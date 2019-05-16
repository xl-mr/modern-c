#include <stdio.h>

double triangle_area(double base, double height);

int main(void)
{
    printf("area = %.2lf\n", triangle_area(5.0, 6.0));

    return 0;
}

double triangle_area(double base, double height)
{
    double product;
    product = base * height;
    return product / 2;
}
