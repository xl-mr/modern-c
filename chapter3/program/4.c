#include <stdio.h>

int main()
{
    int prefix, area_code, tel;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &prefix, &area_code, &tel);

    printf("You entered %d.%d.%d\n", prefix, area_code, tel);

    return 0;
}
