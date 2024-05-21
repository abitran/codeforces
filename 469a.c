#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int n;  // n levels
    int p, q;
    int x, y;
    int flag = 1;
    scanf("%d", &n);
    scanf("%d", &p);
    int res[n+1];
    for (int i = 0; i <= n; i++)
        res[i] = 0;

    while(p){
        scanf("%d", &x);
        res[x] = 1;
        p--;
    }

    scanf("%d", &q);
    while(q){
        scanf("%d", &y);
        res[y] = 1;
        q--;
    }

    for (int i = 1; i <=n; i++)
        if (res[i] == 0){
            printf("Oh, my keyboard!\n");
            flag = 0;
            break;
        }
    if (flag == 1)
        printf("I become the guy.\n");

    return 0;
}
