#include <stdio.h>
#include <string.h>

#define N 30

void reverse(char *message) 
{
    char *start, *end, temp;
    
    start = message;
    end = message + strlen(message) - 1;
    
    while (*start != *end && start < (message + strlen(message) / 2)) {
        //printf("before start = %c, end = %c \n", *start, *end);
        temp = *start;
        *start = *end;
        *end = temp;
        //printf("swap after start = %c, end = %c \n", *start, *end);
        start++;
        end--;
    }
}

int main(void)
{
    int i, ch;
    char str[N + 1];

    i = 0;
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        str[i] = (char)ch;
        i++;
    }
    str[i] = '\0';
   
    reverse(str);

    printf("Reversal is: %s\n", str);

    return 0;
}
