#include <stdio.h>
#include <stdbool.h>

struct date {
    int year, month, day;
};

int compare_dates(struct date d1, struct date d2);
int date_to_int(struct date d); 

int main(void)
{
    struct date d1, d2;

    printf("Enter first date(mm/dd/yy):");
    scanf("%2d/%2d/%2d", &d1.month, &d1.day, &d1.year);

    printf("Enter second date(mm/dd/yy):");
    scanf("%2d/%2d/%2d", &d2.month, &d2.day, &d2.year);

    printf("compare_dates = %d\n", compare_dates(d1, d2));

    return 0;
}

int compare_dates(struct date d1, struct date d2)
{
    return date_to_int(d1) - date_to_int(d2);
}

int date_to_int(struct date d)
{
    printf("date d.year = %d, d.month = %d, d.day = %d", d.year, d.month, d.day);

    int total;
    total = d.year * 100 * 100 + d.month + d.day;
    
    printf("%d\n", total);

    return total;
}
