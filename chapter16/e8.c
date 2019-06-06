#include <stdio.h>

struct color {
    int red;
    int green;
    int blue;
};

int main(void)
{
    const struct color MAGENTA = {255, 0, 255};
    const struct color MAGENTA1 = {.red = 255, .blue = 255};

    printf("red = %d, green = %d, blue = %d\n", MAGENTA.red, MAGENTA.green, MAGENTA.blue);
    printf("red = %d, green = %d, blue = %d\n", MAGENTA1.red, MAGENTA1.green, MAGENTA1.blue);
    
    return 0;
}
