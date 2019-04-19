#include <stdio.h>

#define PI 3.14159265359f
#define VOLUME ((4.0f/3.0f) * PI)

int main()
{
    int r = 10;
    printf("Sphere volume: %f\n", VOLUME * r * r);

    return 0;
}
