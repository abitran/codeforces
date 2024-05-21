#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int rows, cols;
    scanf("%d %d", &rows, &cols);
    if (rows%2 == 0)
        printf("%d\n", (int)(rows*cols)/2);
    else
        printf("%d\n",(int) floor((rows*cols)/2));

}


