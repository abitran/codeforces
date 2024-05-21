#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char **argv)
{
    long long colors[4];
    int i, j;
    int  no_repeat = 1;
    scanf("%lld %lld %lld %lld", &colors[0], &colors[1], &colors[2], &colors[3]);

    for (i = 1; i < 4; i++){
        for (j = 0; j < i; j++)
            if (colors[i] == colors[j])
                break;

        if (i == j)
            no_repeat++;
    }


    printf("%d\n", 4 - no_repeat);


    return 0;

}
