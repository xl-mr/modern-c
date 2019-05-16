#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define LETTER 'A'

void generate_random_walk(char arr[N][N]);
void print_array(char arr[N][N]);

int main(void)
{
    char arr[N][N] = {};
        
    generate_random_walk(arr);
    print_array(arr);
    
    return 0;
}

void generate_random_walk(char arr[N][N])
{
    int i, j, start, dir, check;

    srand((unsigned)time(NULL));

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            arr[i][j] = '.';
        }
    }

    i = 0;
    j = 0;
    arr[i][j] = LETTER;

    start = LETTER + 1;
    for (; start < LETTER + 26;start++) {
        check = 0;
        dir = rand() % 4; // 0-上 1-下 2-左 3-右
        while (check < 5) {
            switch (dir) {
                case 0:
                    i--;
                    check++;
                    break;
                case 1:
                    i++;
                    check++;
                    break;
                case 2:
                    j--;
                    check++;
                    break;
                case 3:
                    j++;
                    check++;
                    break;
            }
            #ifndef DEBUG
                printf("before i = %d , j = %d ", i, j);
            #endif
            if (!(i >=0 && i < N && j >=0 && j < N)) {
                i = i < 0 ? 0 : i;
                i = i >= 10  ? N - 1 : i;
                j = j < 0 ? 0 : j;
                j = j >= 10  ? N - 1 : j;
                dir++;   
                #ifndef DEBUG
                    printf("i j not valid ");
                #endif
            } else if (arr[i][j] != '.') {
                switch (dir) {
                    case 0:
                        i++;
                        break;
                    case 1:
                        i--;
                        break;
                    case 2:
                        j++;
                        break;
                    case 3:
                        j--;
                        break;
                }
                dir++;   
                #ifndef DEBUG
                    printf("arr[i][j] hava val ");
                #endif
            } else {
                //printf("111");
                break;
            }
           
            dir = dir == 4 ? 0 : dir;    
            #ifndef DEBUG
                printf("after dir = %d ", dir);
            #endif
            //printf("after i = %d , j = %d ", i, j);
        }
        #ifndef DEBUG
            printf("after i = %d , j = %d ", i, j);
            printf("check = %d ", check);
            printf("char = %c\n ", start);
        #endif
        if (check > 4) {
            break;
        }
        arr[i][j] = (char)start;
    }

}
void print_array(char arr[N][N])
{
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}
