#include <stdio.h>

struct time {
    int hours, minutes, seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
    struct time time;
    
    time = split_time(86400);

    printf("time.hours = %02d\n", time.hours);
    printf("time.minutes = %02d\n", time.minutes);
    printf("time.seconds = %02d\n", time.seconds);

    return 0;
}

struct time split_time(long total_seconds)
{
    int remainder, hours, minutes, seconds;
    struct time time;

    //hours
    hours = (int)total_seconds / 3600;

    // minutes
    remainder = total_seconds % 3600;
    minutes = remainder / 60;

    //seconds
    seconds = remainder %= 60;

    time.hours = hours;
    time.minutes = minutes;
    time.seconds = seconds;

    return time;
}
