#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

int area(struct rectangle r);
struct point center_point(struct rectangle r);
struct rectangle modify_rect(struct rectangle r);
bool in_rect(struct rectangle r);

int main(void)
{
    return 0;
}

int area(struct rectangle r)
{
    int x, y;
    x = abs(r.upper_left.x - r.lower_right.x);
    y = abs(r.upper_left.y - r.lower_right.y);
    
    return x * y;
}

struct point center_point(struct rectangle r);
struct rectangle modify_rect(struct rectangle r);
bool in_rect(struct rectangle r);
