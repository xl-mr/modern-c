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

void test(char *str)
{
    str++;
}

int main(void)
{
    printf("str len = %lu\n", my_strlen("abcd"));
    int i, *p = &i;
    char str[] = "abc";
    printf("str first memory address = %p\n", (void *)str);

    test(str);

    printf("str first memory address = %p\n", (void *)str);


    printf("i memory address = %p\n", &i);
    printf("p memory addess = %p\n", p);
    printf("*p memory addess = %p\n", &*p);

    return 0;
}
