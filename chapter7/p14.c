#include <stdio.h>
#include <math.h>

int main(void)
{
    int pow;
    double dev = 0.00001, guess = 1.0;

    printf("Enter a positive integer: ");
    scanf("%d", &pow);
    
    while (fabs(guess * guess - pow) > dev) {
        guess = (guess + (pow/guess)) / 2.0;
    }

    printf("Square root: %lf\n", guess);

    return 0;
}
