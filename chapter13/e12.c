#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void)
{
    char ext[20];

    get_extension("file.txt", ext);

    printf("ext = %s\n", ext);

    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    int i; // len = (int)strlen(file_name);

    i = 0;
    while (*file_name) {
        if (*file_name == '.') {
            break;   
        }
        i++;
        file_name++;
    }
    file_name++;

    strcpy(extension, file_name);
}
