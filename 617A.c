#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){

    int x;
    scanf("%d", &x);
    printf("%d\n", x%5 == 0 ? (int)ceil(x/5) : (int)ceil(x/5)+1);

    return 0;
}
    
