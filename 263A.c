#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ROWS 5
#define COLS 5

int main(int argc, char **argv){
    int i, j;
    int matrix[ROWS][COLS];

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            if (matrix[i][j] == 1){
                if (i == 2 && j == 2){
                    printf("0\n");
                    break;
                }
                else{
                    printf("%d\n", abs(2-i)+abs(2-j));
                    break;
                }
            }
}


