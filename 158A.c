#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int n, k, adv=0;
    scanf("%d %d", &n, &k);
    int scores[n];
    for (int i=0; i<n; i++)
        scanf("%d", &scores[i]);

    for (int i=0; i<n; i++)
        if ((scores[i] >= scores[k-1]) && (scores[i] > 0))
            adv++;


    printf("%d\n", adv);


}



