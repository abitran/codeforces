#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n, games = 0;
    scanf("%d", &n);
    int h[n], g[n];
    for (int i = 0; i < n; i++)
        scanf("%d%d", &h[i], &g[i]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if ((i != j) && (h[i] == g[j]))
                games++;


    printf("%d\n", games);


    return 0;
}
