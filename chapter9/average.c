#include <stdio.h>

double avg(double a, double b)
{
    return ( a + b ) / 2;
}

int main(void)
{
    double x, y, z;

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    printf("Average of %g and %g: %g\n", x, y, avg(x, y));
    printf("Average of %g and %g: %g\n", y, z, avg(y, z));
    printf("Average of %g and %g: %g\n", x, z, avg(x, z));

    return 0;
}
