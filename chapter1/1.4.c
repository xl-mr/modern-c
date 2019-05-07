#include <stdio.h>

int main()
{
    float farth, cesius;
    int low, high, step;
    
    low = 0;
    high = 300;
    step = 20;
    
    farth = low;   
    while (farth <= high)
    {
        cesius = 9 * farth / 5.0 + 32;
        printf("%6.1f %3.0f\n", cesius, farth);
        farth += step;
    }

    return 0;
}
