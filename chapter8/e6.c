#include <stdio.h>

int segments[10][7] = {
    {1,1,1,1,1,1},
    {0,1,1},
    {1,1,0,1,1,0,1},
    {1,1,1,1,0,0,1},
    {0,1,1,0,0,1,1},
    {1,0,1,1,0,1,1},
    {1,0,1,1,1,1,1},
    {1,1,1},
    {1,1,1,1,1,1,1},
    {1,1,1,1,0,1,1}
};

int main(void)
{
    int i, j;
    char k;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            switch (j) {
                case 0:
                case 3:
                case 6:
                    k = '_';
                    break;
                case 1:
                case 2:
                case 4:
                case 5:
                    k = '|';
                    break;
                default:
                    break;
            }
            if (segments[i][j]) {
               printf("%c", k); 
            }
        }
        printf("  ");
    }
}
