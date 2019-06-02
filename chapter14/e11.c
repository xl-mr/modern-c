#include <stdio.h>
#include <math.h>

#define ERROR(msg, ...) fprintf(stderr, msg , __VA_ARGS__);

int main(void)
{
    int index = 1;
    ERROR("Range error: index = %d\n", index);

    return 0;
}
