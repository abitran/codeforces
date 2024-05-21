#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int n, h, counter = 0;

    scanf("%d %d", &n, &h);
    int a[n];
    
    for (int i = 0; i < n; i++)
       scanf("%d", &a[i]);

    for (int i = 0; i < n; i++){
        if (a[i] <= h)
            counter++;
        else
            counter += 2;
    }

    printf("%d\n", counter);

    return 0;


}

