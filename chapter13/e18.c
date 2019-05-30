#include <stdio.h>

void remove_filename(char *url);

int main(void)
{
    char str[] = "http://www.baidu.com/index.html";

    remove_filename(str);

    printf("url = %s\n", str);

    return 0;
}

void remove_filename(char *url)
{
    int i, j;
    char *p = url;

    i = 0;
    j = -1;
    while (*url) {
        
        if (*url == '/') {
            j = i;
        }
        i++;
        url++;
    }

    if (j > 0) {
        *(p + j) = '\0';
    }
}
