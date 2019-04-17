#include <stdio.h>

int main()
{
    int length, width, height, volume, weight;
    printf("enter length of box: ");
    scanf("%d", &length);
    printf("enter width of box: ");
    scanf("%d", &width);
    printf("enter height of box: ");
    scanf("%d", &height);

    volume = length * width * height;
    printf("Volume (cubic inches): %d\n", volume);
    weight = (volume + 165) / 166;
    printf("Dimensional weight : %d\n", weight);

    return 0;
}
