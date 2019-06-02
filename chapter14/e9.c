#include <stdio.h>
#include <math.h>

#define CHECK(x,y,n) ((((x) >= 0) && ((x) <= (n - 1)) && ((y) >= 0) && ((y) <= (n - 1))) ? 1 : 0)

#define MEDIAN(x,y,z) (((x) + (y) + (z)) / 3)

#define POLYNOMIAL(x) ((3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - pow(x, 2) + (7 * x) - 6)

int main(void)
{
    int check, median, p;
    check = CHECK(1,2,5);

    median = MEDIAN(1,2,3);

    p = POLYNOMIAL(4);

    printf("check = %d, median = %d, p = %d\n", check, median, p);

    return 0;
}
