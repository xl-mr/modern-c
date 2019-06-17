#include <stdio.h>
#include <math.h>

void tabulate(double (*f)(double), double first, double last, double incr);

int main(void)
{
    double final, increment, init;

    printf("Enter init value: ");
    scanf("%lf", &init);

    printf("Enter final value: ");
    scanf("%lf", &final);

    printf("Enter increment value: ");
    scanf("%lf", &increment);

    printf("\n      x       cos(x)"
           "\n   -------   -------\n");
    tabulate(cos, init, final, increment);

    printf("\n      x       sin(x)"
           "\n   -------   -------\n");
    tabulate(sin, init, final, increment);

    printf("\n      x       tan(x)"
           "\n   -------   -------\n");
    tabulate(tan, init, final, increment);

    return 0;
}

void tabulate(double (*f)(double), double first, double last, double incr)
{
    double x;
    int i, num_intervals;

    num_intervals = (int)ceil((last - first) / incr);

    for (i = 0; i < num_intervals; i++) {
        x = first + i * incr;
        printf("%10.5f %10.5f\n", x, (*f)(x));
    }

}
