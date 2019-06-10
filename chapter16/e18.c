#include <stdio.h>

#define N 8

enum Piece {EMPTY, SOLDIER, HORSE, ELEPHANT, CAR, QUEEN, KING};
enum Color {WHITE, BLACK};

struct Square {
    enum Piece piece;
    enum Color color;
};

int main(void)
{
    int i, j;
    struct Square board[N][N] = {
        {{SOLDIER, WHITE}, {SOLDIER, WHITE}, {SOLDIER, WHITE}, {SOLDIER, WHITE}, {SOLDIER, WHITE}, {SOLDIER, WHITE}, {SOLDIER, WHITE}},
        {{SOLDIER, WHITE}, {HORSE, WHITE}, {CAR, WHITE}, {KING, WHITE}, {QUEEN, WHITE}, {CAR, WHITE}, {HORSE, WHITE}, {SOLDIER, WHITE}},
        {},
        {},
        {},
        {},
        {{SOLDIER, BLACK}, {SOLDIER, BLACK}, {SOLDIER, BLACK}, {SOLDIER, BLACK}, {SOLDIER, BLACK}, {SOLDIER, BLACK}, {SOLDIER, BLACK}},
        {{SOLDIER, BLACK}, {HORSE, BLACK}, {CAR, BLACK}, {KING, BLACK}, {QUEEN, BLACK}, {CAR, BLACK}, {HORSE, BLACK}, {SOLDIER, BLACK}},
    };

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("color = %d, piece = %d | ", board[i][j].color, board[i][j].piece);
        } 
        printf("\n");
    }

    return 0;
}
