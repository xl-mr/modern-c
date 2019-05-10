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

    printf("%-15s ", "Digit:");
    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("%-15s ", "Occurrentces:");
    for (i = 0; i < 10; i++) {
        printf("%d ", num_digit[i]);
    }
    printf("\n");

    return 0;
}
