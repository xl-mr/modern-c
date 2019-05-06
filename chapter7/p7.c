#include <stdio.h>

int main()
{
    int num1, num2, denom1, denom2, ch;

    printf("Enter two fractions separated by a plus or minus or multi or divide sign: ");
    scanf("%d/%d", &num1, &denom1);

    while ((ch = getchar()) == ' ')
    {
    
    }

    scanf("%d/%d", &num2, &denom2);

    switch(ch) {
        case '+':   
            printf("The sum is %d/%d\n", num1 * denom2 + num2 * denom1, denom1 * denom2);
            break;
        case '-':   
            printf("The sum is %d/%d\n", num1 * denom2 - num2 * denom1, denom1 * denom2);
            break;
        case '*':   
            printf("The sum is %d/%d\n", num1 * num2, denom1 * denom2);
            break;
        case '/':   
            printf("The sum is %d/%d\n", num1 * denom2, denom1 * num2);
            break;
        default:
            break;
    }

    return 0;
}
