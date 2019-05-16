#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void)
{
    printf("%d\n", day_of_year(4, 15, 2008));

    return 0;
}


int day_of_year(int month, int day, int year)
{
    int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_count, i;

    day_count = 0;
    for (i = 1; i < month; i++) {
        day_count += num_days[i - 1];
    }

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        day_count++;
    }

    return day_count + day;
}


