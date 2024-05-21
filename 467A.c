#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int n, p, q, mv = 0;
    
    scanf("%d", &n);

    while (n--){
        scanf("%d %d", &p, &q);
        if ((p <= q) && (q - p > 1))
            mv++;
    }

    printf("%d\n", mv);

    return 0;

}

