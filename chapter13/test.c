#include <stdio.h>

char digit_to_hex_char(int digit)
{
    return "0123456789ABCDEF"[digit];
}

int main(void)
{
    printf("%c\n", digit_to_hex_char(1));

    return 0;
}
