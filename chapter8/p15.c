#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i;
    char str[50];
    unsigned char pos;
    char encrypted_char;

    printf("Enter message to be encrypted: ");
    scanf("%[^\n]", str);

    printf("Enter shift amout[1-25]: ");
    scanf("%hhu", &pos);

    for (i = 0; i < (int)strlen(str); i++) {
        if (!isalpha(str[i])) {
            continue;
        }
        if (isupper(str[i])) 
        {
            encrypted_char = ((unsigned char)(str[i] - 'A')  + pos) % 26 + 'A';
        } else {
            encrypted_char = ((unsigned char)(str[i] - 'a')  + pos) % 26 + 'a';
        }
        str[i] = encrypted_char;
    }
    
    printf("Encrypted message: %s\n", str);

    return 0;
}
