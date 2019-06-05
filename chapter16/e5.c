#include <stdio.h>
#include <stdbool.h>

struct date {
    int year, month, day;
};

int months[12] = {
    31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);
bool leap_year(int year);
int d_to_i(struct date d);

int main(void)
{
    struct date d1 = {2000, 5, 23}, d2 = {2011, 4, 20};

    printf("d1 day of year = %d\n", day_of_year(d1));
    printf("d2 day of year = %d\n", day_of_year(d2));

    printf("d1 compare d2 res = %d\n", compare_dates(d1, d2));

    printf("d1 = %d, d2 = %d\n", d_to_i(d1), d_to_i(d2));

    return 0;
}

int day_of_year(struct date d)
{
    int i, sum;
    sum = 0;
    for (i = 0; i < d.month; i++) {
        sum += months[i];
    }
    if (leap_year(d.year)) {
        sum++;
    }

    return sum;
}

int compare_dates(struct date d1, struct date d2) 
{
    return d_to_i(d1) - d_to_i(d2);   
}

int d_to_i(struct date d)
{
    int int_date = d.year;

    int_date *= 100; 
    printf("int date === %d\n", int_date);
    int_date += d.month;

    int_date *= 100;
    int_date += d.day;

    return int_date;
}

bool leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 3200 != 0)) {
        return true;
    }
    return false;
}
