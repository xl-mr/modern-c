#include <stdio.h>

int main()
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %d x %d x %d\n", length, width, height);
    printf("volume (cubic inches): %d \n", volume);
    printf("Dimensionsal weight (pounds): %d\n", weight);

    return 0;
}
