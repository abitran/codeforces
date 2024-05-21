#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int a, b, years = 0;
    scanf("%d %d", &a, &b);
    while (1){
        a *= 3;
        b *= 2;
        years++;
        if (a > b)
            break;
    }

    printf("%d\n", years);

    return 0;
}

