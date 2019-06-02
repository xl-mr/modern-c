#include <stdio.h>

#define MY_POW(x) ((x) * (x))

#define MY_MOD(x) ((x) % 4)

#define MY_TEST(x, y) ((x) * (y) < 100 ? 1 : 0)

int main(void)
{
    printf("pow = %d\n", MY_POW(5));
    
    printf("mod = %d\n", MY_MOD(45));

    printf("test = %d\n", MY_TEST(20, 7));

    return 0;
}
