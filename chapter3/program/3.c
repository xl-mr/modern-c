#include <stdio.h>

int main()
{
    int gs, group_identifier, publisher_code, item_num, check_digit;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs, &group_identifier, &publisher_code, &item_num, &check_digit);

    printf("GS1 prefix: %d\n", gs);
    printf("Gruop identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check_digit);

    return 0;
}
