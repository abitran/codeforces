#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int n, pt, va, to;
    int count = 0;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d%d%d", &pt, &va, &to);
        if ((pt==1) && (pt==va) || (pt==1) && (to==pt) || (va==1) && (va==to))
            count++;
    }
    printf("%d\n", count);
}

