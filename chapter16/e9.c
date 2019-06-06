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
