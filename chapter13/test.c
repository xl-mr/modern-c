#include <stdio.h>

char digit_to_hex_char(int digit)
{
    return "0123456789ABCDEF"[digit];
}

void test(char *str)
{
    str++;
}

int main(void)
{
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
