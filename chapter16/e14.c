#include <stdio.h>

#define RECTANGLE 1
#define CIRCLE    2

struct point {
    int x, y;
};

struct shape {
    int shape_kind;
    struct point center;
    union {
        struct {
            int length, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;

double area(struct shape s);
struct shape move(struct shape s, int x, int y);
struct shape scale(struct shape s, double c);

int main(void)
{

    return 0;
}

double area(struct shape s)
{
    if (s.shape_kind == RECTANGLE) {
        return s.u.rectangle.length * s.u.rectangle.width;
    } else {
        return 3.14159 * s.u.circle.radius * s.u.circle.radius;
    }
}
struct shape move(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;

    return s;
}

struct shape scale(struct shape s, double c)
{
    if (s.shape_kind == RECTANGLE) {
        s.u.rectangle.length *= c;
        s.u.rectangle.width *= c;
    } else {
        s.u.circle.radius *= c;
    }
    return s;   
}

