#include <stdio.h>

int main(void)
{
    int index, i;
    int num_digit[10] = {0};
    long digit;

    printf("Enter a number: ");
    scanf("%ld", &digit);

    while (digit != 0) {
        index = digit % 10;
        num_digit[index]++;       

        digit /= 10;
    }

    printf("repeatd digit(s): ");
    for (i = 0; i < 10; i++) {
        if (num_digit[i] > 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
