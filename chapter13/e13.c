#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(void)
{
    char str[100];

    build_index_url("baidu.com", str);

    printf("domain = %s\n", str);

    return 0;
}

void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}
