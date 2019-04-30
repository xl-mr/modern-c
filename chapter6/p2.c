#include <stdio.h>

int main()
{
    int m, n, temp;

    printf("Enter two integers: ");
    scanf("%d", &m);
    scanf("%d", &n);

    while (n != 0)
    {
        temp = n;
        n = m % n;
        m = temp;
    }

    printf("Greatest common divisor: %d \n", m);

    return 0;
}
