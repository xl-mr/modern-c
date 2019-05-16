#include <stdio.h>

int num_digits(int n);

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("%d 位 number.\n", num_digits(num));

    return 0;
}

int num_digits(int n)
{
    int i;

    i = 0;
    while (n != 0) {
        n /= 10;
        i++;
    }
    return i;
}
