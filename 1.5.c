#include <stdio.h>

int main()
{
    float farth, cesius;
    int low, high, step;

    low = 0;
    high = 300;
    step = 20;

    for (farth = high; farth >= low; farth -= step) 
    {
        cesius = 5.0f / 9 * (farth - 32);
        printf("%3.0f %6.1f\n", farth, cesius);
    }

    return 0;
}
