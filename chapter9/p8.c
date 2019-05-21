#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

// 宏定义

//类型定义

//外部变量

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int num_succ, num_fail;
    char command;

    num_succ = 0;
    num_fail = 0;
    do {
        if (play_game()) {
            num_succ++;
            printf("You win! \n\n");
        } else {
            num_fail++;
            printf("You loss! \n\n");
        }

        printf("Play again? ");
        scanf(" %c", &command);
        printf("\n");

    } while (tolower(command) == 'y');

    printf("wins: %d, losses: %d \n", num_succ, num_fail);

    return 0;
}

int roll_dice(void)
{
    int r1, r2, num;
    srand((unsigned)time(NULL));

    r1 = (rand() % 6) + 1;
    r2 = (rand() % 6) + 1;

    num = r1 + r2;

    return num;
}

bool play_game(void) 
{
    int sum, i, j;
    int tar_arr[100] = {0};
    bool tar;

    j = 0;
    tar = false;
    while (true) {
        sum = roll_dice();
        printf("You rolled: %d\n", sum);
        if (j == 0) {
            printf("Your point is %d\n", sum);
        }
    
        switch(sum) {
            case 7:
                if (tar) {
                    return false;
                }
            case 11:
                return true;
            case 2:
            case 3:
            case 12:
                return false;
            default:
                for (i = 0; i < 100; i++) {
                    if (tar_arr[i] != 0 && tar_arr[i] == sum) {
                        return true;
                    }
                }
                tar_arr[j] = sum;
                tar = true;
            break;
                
        } 
        j++;
    }
}
