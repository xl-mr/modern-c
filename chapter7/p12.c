#include <stdio.h>

int main()
{
    int ch;
    float sum, a;

    printf("Enter an expression: ");
    sum = getchar() - 48;
    while ((ch = getchar()) != '\n')
    {
        scanf("%f", &a);
        switch (ch) {
            case '+':
                sum += a;
                break;
            case '-':
                sum -= a;
                break;
            case '*':
                sum *= a;
                break;
            case '/':
                sum /= a;
                break;
            default:
                break;
        }
        //putchar(ch);
    }
    printf("Value of expression: %.1f\n", sum);

    return 0;
}
