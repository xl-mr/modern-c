#include <stdio.h>
#include <stdlib.h>

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

struct rectangle *p;

int main(void)
{
    struct point upper_left = {10, 25}, lower_right = {20, 15};

    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    p->upper_left = upper_left;
    p->lower_right = lower_right;

    //TODO 
    free(p);

    return 0;
}
