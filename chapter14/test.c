#include <stdio.h>

#define MAX(x,y) ((x) > (y) ? (x) : (y))

#define PRINT_INT(n) printf(#n " = %d\n", n);

#define TWO_PI (PI * 2)

#define PI 3.14159

#define GENERIC_MAX(type) type type##max(type x, type y)  \
                          {                               \
                            return x > y ? x : y;         \
                          }

#define ECHO(s) \
        do {    \
            gets(s); \
            puts(s); \
        } while (0)

int main(void)
{
    //char str[50];
    PRINT_INT(10 / 5);

    PRINT_INT((int)TWO_PI);

    //GENERIC_MAX(float);

    //ECHO(str);
    
    printf("line = %d, file name = %s, date = %s, time = %s, stdc = %d\n", __LINE__, __FILE__, __DATE__, __TIME__, __STDC__);

    return 0;
}
