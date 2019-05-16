#include <stdio.h>

double median(double x, double y, double z);

int main(void)
{
    printf("medium = %.2lf\n", median(9.8, 20.45, 12.34));

    return 0;
}

double median(double x, double y, double z) 
{
    double medium;

    if ((x >= z && x <= y) || (x >= y && x <= z)) {
        medium = x;
    } else if ((y >= x && y <= z) || (y >= z && y <= x)) {
        medium = y;
    } else {
        medium = z;
    }

    return medium;
}
