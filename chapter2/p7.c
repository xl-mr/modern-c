#include <stdio.h>

#define TWENTY_DOLLAR 20
#define TEN_DOLLAR 10
#define FIVE_DOLLAR 5
#define ONE_DOLLAR 1

int main()
{
    int twenty_dollar_num, ten_dollar_num, five_dollar_num, one_dollar_num, amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenty_dollar_num = amount / TWENTY_DOLLAR;
    amount -= twenty_dollar_num * TWENTY_DOLLAR; 
    
    ten_dollar_num = amount / TEN_DOLLAR;
    amount -= ten_dollar_num * TEN_DOLLAR;

    five_dollar_num = amount / FIVE_DOLLAR;
    amount -= five_dollar_num * FIVE_DOLLAR;

    one_dollar_num = amount / ONE_DOLLAR;

    printf("$20 bills: %d\n", twenty_dollar_num);
    printf("$10 bills: %d\n", ten_dollar_num);
    printf("$5 bills: %d\n", five_dollar_num);
    printf("$1 bills: %d\n", one_dollar_num);

    printf("amount: %d\n", amount);

    return 0;
}
