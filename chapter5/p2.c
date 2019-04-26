#include <stdio.h>
#include <string.h>

#define HOURS 12

int main()
{
    int h, m;
    char s[] = "AM";

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h, &m);

    if (h > HOURS)
    {
        h -= HOURS;
        strcpy(s, "PM");
    }

    printf("Equivalent 12-hour time: %d:%02d %s\n",  h, m, s);

    return 0;
}
