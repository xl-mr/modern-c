#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char *message, int pos)
{
    while (*message) {
        if (!isalpha(*message)) {
            message++;
            continue;
        }
        if (isupper(*message)) 
        {
            *message = ((unsigned char)(*message - 'A')  + pos) % 26 + 'A';
        } else {
            *message = ((unsigned char)(*message - 'a')  + pos) % 26 + 'a';
        }
        message++;
    }
}

int main(void)
{
    char str[50];
    unsigned char pos;

    printf("Enter message to be encrypted: ");
    scanf("%[^\n]", str);

    printf("Enter shift amout[1-25]: ");
    scanf("%hhu", &pos);
    
    encrypt(str, pos);

    printf("Encrypted message: %s\n", str);

    return 0;
}
