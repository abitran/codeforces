#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    float fraction = 0.0;
    scanf("%d",&n);
    int drinks[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &drinks[i]);
        fraction += drinks[i];
    }


    printf("%f", fraction/n);

    return 0;
}
