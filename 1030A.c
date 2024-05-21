#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int n;
    scanf("%d", &n);
    int ops[n], sum = 0;
    for (int i=0; i<n; i++)
        scanf("%d", &ops[i]);

    for (int i=0; i<n; i++)
        sum += ops[i];

    printf("%s\n", sum > 0 ? "HARD" : "EASY");

    return 0;    


}

