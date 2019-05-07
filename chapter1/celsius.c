#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main()
{
    float farh, celsius;

    printf("Enter farh temperature: ");
    scanf("%f", &farh);

    celsius = (farh - FREEZING_PT) * SCALE_FACTOR;

    printf("celsius equivalent: %.1f\n", celsius);

    return 0;
}
