#include <stdio.h>

struct {
    int x;
    int y;
} x;

struct {
    int x;
    int y;
} y;

int main(void)
{
    x.x = 1;
    x.y = 1;

    y.x = 2;
    y.y = 2;
    
    return 0;
}
