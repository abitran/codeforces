#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
    int n, t;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        printf("%d\n", (int)floor((n-1)/2));
    }

    return 0;
    }
