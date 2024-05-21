#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int k, n, w;
    int cost = 0;
    scanf("%d %d %d", &k, &n, &w);
    for (int i = 1; i <= w; i++)
        cost += i*k;
    
    printf("%d", ((n-cost) < 0 ? abs(n-cost) : 0));

    return 0;
}

