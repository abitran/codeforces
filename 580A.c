#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int n, counter = 1, max = 1;
    scanf("%d", &n);

    int seq[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &seq[i]);

    for (int i = 0; i < n-1; i++){
        if (seq[i+1] >= seq[i]){
            counter++;
            if (counter > max)
                max = counter;
        }

        else
            counter = 1;

    }

    printf("%d\n", max);

    return 0;

}
