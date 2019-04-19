#include <stdio.h>

#define PI 3.14159265359f
#define VOLUME ((4.0f/3.0f) * PI)

int main()
{
    int r;

    printf("Enter ball radius: ");
    scanf("%d", &r);

    printf("Sphere volume: %f\n", VOLUME * r * r);

    return 0;
}
