#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(int argc, char **argv)
{
    char game[MAX];
    char play1 [] = "1111111";
    char play0 [] = "0000000";
    scanf("%s", game);

    if (strstr(game, play1) || strstr(game, play0))
            printf("YES\n");

    else
        printf("NO\n");

    return 0;
}
