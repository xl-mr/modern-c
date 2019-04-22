#include <stdio.h>

int main()
{
    int item_num, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("%-s\t%s\t%-s\n", "Item", "Unit price", "Purchase date");
    printf("%-d\t$%.2f\t%d/%d/%d\n", item_num, unit_price, day, month, year);

    return 0;
}
    
