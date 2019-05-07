#include <stdio.h>

int main()
{
    printf("char byte num %lu\n", sizeof(char));
    printf("short int byte num %lu\n", sizeof(short));
    printf("int byte num %lu\n", sizeof(int));
    printf("long int byte num %lu\n", sizeof(long));
    printf("float byte num %lu\n", sizeof(float));
    printf("double byte num %lu\n", sizeof(double));


    float farth, celsius;
    int low, high, step;
    low = 0;  
    high = 300;
    step = 20;

    farth = low;
    printf("farth cesius\n");
    while (farth <= high)
    {
        celsius = 5.0 / 9 * (farth - 32);
        printf("%3.0f, %6.1f\n", farth, celsius);
        farth += step;
    }

    return 0;
}
