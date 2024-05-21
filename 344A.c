#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int n, groups = 0;
    scanf("%d", &n);
    int magnets[n];

    for (int i=0; i<n; i++)
        scanf("%d", &magnets[i]);


    for (int i=0; i<n; i++)
        if (magnets[i] != magnets[i+1])
            groups++;


    printf("%d\n", groups);

    return 0;

}

