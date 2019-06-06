#include <stdio.h>
#include <stdbool.h>

struct color {
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color c1, struct color c2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void)
{
    return 0;
}

struct color make_color(int red, int green, int blue)
{
    struct color c;

    c.red = red;
    c.green = green;
    c.blue = blue;

    return c;
}
int getRed(struct color c)
{
    return c.red;
}
bool equal_color(struct color c1, struct color c2)
{
    return (c1.red == c2.red) && (c1.green == c2.green) && (c1.blue == c2.blue);
}
struct color brighter(struct color c)
{
    if ((c.red == 0) && (c.green == 0) && (c.blue == 0)) {
        c.red = c.green = c.blue = 3;
    } else if (c.red > 0 && c.red < 3) {
        c.red = 3 * 10 / 7;
    } else if (c.green > 0 && c.green < 3){
        c.green = 3 * 10 / 7;
    } else if (c.blue > 0 && c.blue < 3) {
        c.blue = 3 * 10 / 7;
    } else {
        c.red = (c.red * 10 / 7) > 255 ? 255 : c.red * 10 / 7;
        c.green = (c.green * 10 / 7) > 255 ? 255 : c.green * 10 / 7;
        c.blue = (c.blue * 10 / 7) > 255 ? 255 : c.blue * 10 / 7;
    }
    
    return c;
}
struct color darker(struct color c)
{
    c.red = c.red * 7 / 10;
    c.green = c.green * 7 / 10;
    c.blue = c.blue * 7 / 10;

    return c;
}
