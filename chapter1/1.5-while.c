#include <stdio.h>

int main()
{
    float farth, cesius;
    int low, high, step;

    low = 0;
    high = 300;
    step = 20;

    farth = high;
    while (farth >= low)
    {
        cesius = 5.0 / 9 * (farth - 32);
        printf("%3.0f %6.1f\n", farth, cesius);
        farth -= step;
    }

    return 0;
}
