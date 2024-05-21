#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int n;

// if n=1 then his feeelings is "I hate it"
// if n=2 "I hate that I love it"
// if n=3 "I hate that I love that I hate it"
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        if (i%2 == 1){
            if (i == 1)
                printf("I hate");
            else
                printf(" that I hate");
        }
        if (i%2 == 0)
            printf(" that I love");
    
    
    
    
    }
    printf(" it\n");
    return 0;

}

