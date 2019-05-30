#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool test_extension(const char *file_name, const char *extension);

int main(void)
{
    printf("bool = %d\n", test_extension("memo.txt", "TXT"));

    return 0;
}

bool test_extension(const char *file_name, const char *extension)
{
    char *p, str[20];
    while (*file_name) {
        if (*file_name == '.') {
            file_name++;
            break;
        }
        file_name++;
    }

    strcpy(str, file_name);
    
    p = str;
    while (*p) {
        *p = (char)toupper(*p);
        p++;
    } 

    return strcmp(str, extension) == 0 ? true : false;
}
