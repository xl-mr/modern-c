#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define LETTER 'A'

int main(void)
{
    int i, j, start, dir;
    int arr[N][N] = {};

    srand((unsigned)time(NULL));

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            arr[i][j] = '.';
        }
    }

    i = 0;
    j = 0;
    arr[i][j] = LETTER;

    start = 1;
    for (; start <= LETTER + 26;start++) {
        while (arr[i][j] != '.' && i >=0 && i < N && j >=0 && j < N) 
        {
            dir = rand() % 4; // 0-上 1-下 2-左 3-右
            switch (dir) {
                case 0:
                    i--;
                    break;
                case 1:
                    i++;
                    break;
                case 2:
                    j--;
                    break;
                case 3:
                    j++;
                    break;
            }
        }
        printf("i = %d , j = %d ", i, j);
        arr[i][j] = LETTER + start;
    }
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
