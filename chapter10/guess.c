#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_NUMBER 100

// 类型定义

int secret_number;  // external variable

void init_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main(void)
{
    char command;

    printf("Guess the secret number between 1 and %d.\n", MAX_NUMBER);

    do {
        init_number_generator();

        choose_new_secret_number();
        printf("A new number has been chosen %d.\n", secret_number);

        read_guesses();

        printf("Play again? (Y/N)\n");
        scanf("%c", &command);
        printf("\n");
    } while (tolower(command) == 'y');

    return 0;
}

void init_number_generator(void)
{
    return srand((unsigned)time(NULL));
}

void choose_new_secret_number(void)
{
    secret_number = rand() % MAX_NUMBER + 1;
}

void read_guesses(void)
{
    int guess, num_guesses = 0;
    for (;;) {
        num_guesses++;

        printf("Enter guess: ");
        scanf("%d", &guess);

        if (guess == secret_number) {
            printf("You won in %d guesses!\n", num_guesses);
            return;
        } else if (guess > secret_number){
            printf("too high; try again. \n");
        } else {
            printf("too low; try again. \n");
        }
    }
}
