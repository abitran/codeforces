#include <stdio.h>
#include <stdlib.h>

#define CORDS 3

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    int sumx = 0, sumy = 0, sumz = 0;
    int points[n][CORDS];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < CORDS; j++)
            scanf("%d", &points[i][j]);


    for (int i = 0; i < n; i++){
            sumx += points[i][0];
            sumy += points[i][1];
            sumz += points[i][2];
    }


    if (sumx == 0 && sumy == 0 && sumz == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;

}
