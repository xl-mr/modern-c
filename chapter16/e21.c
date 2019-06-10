#include <stdio.h>

enum {NUL, NOH, STX, EXT} e1;
enum {VT = 1, FF, CR} e2;
enum {SO = 14, SI, DLE, CAN = 24, EM} e3;
enum {ENQ = 45, ACK, BEL, LE = 37, ETB, ESC} e4;

int main(void)
{
    int i;
    
    printf("print enum e1: ");
    for (i = NUL;i <= EXT; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("print enum e2: ");
    for (i = VT;i <= CR; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("print enum e3: ");
    printf("%d ", SO);      //14
    printf("%d ", SI);      //15
    printf("%d ", DLE);     //16
    printf("%d ", CAN);     //24
    printf("%d ", EM);      //25
    printf("\n");

    printf("print enum e3: ");
    printf("%d ", ENQ); //45
    printf("%d ", ACK); //46
    printf("%d ", BEL); //47
    printf("%d ", LE);  //37
    printf("%d ", ETB); //38
    printf("%d ", ESC); //39
    printf("\n");
    
    return 0;
}
