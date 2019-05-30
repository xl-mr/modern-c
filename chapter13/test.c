#include <stdio.h>
#include <string.h>

char digit_to_hex_char(int digit)
{
    return "0123456789ABCDEF"[digit];
}

size_t my_strlen(const char *str)
{
    size_t len = 0;
    while (*str++) {
        len++;
    } 
    
    return len;
}

int main(void)
{
    printf("str len = %lu\n", my_strlen("abcd"));

    return 0;
}
