#include <stdio.h>

#define MONTHS 12

int main()
{
    float amount, rate, one_month_payment, rate_amount;
    int i;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &one_month_payment);

    for (i = 1; i <= 3;i++)
    {
        rate_amount = amount * (rate / (MONTHS * 100));
        amount = amount - one_month_payment + rate_amount;
        printf("Balance remaining after %d payment: %.2f\n", i, amount);
    }

    return 0;
};
