#include <stdio.h>
#include <math.h>

int sum(int (*f)(int), int start, int end);
int my_sum(int);

int main(void)
{
    printf("sin sum = %d\n", sum(my_sum, 1, 10));

    return 0;
}

int my_sum(int i) {
    return i + 1;
}

int sum(int (*f)(int), int start, int end)
{
    int i;
    int sum;

    sum = 0;
    for (i = start; i <= end; i++) {
        sum += (*f)(i);
    }

    return sum;
}
