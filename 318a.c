#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n, k;
    scanf("%d %d", &n, &k);
    int nums[n];

    for (int i = 0; i < n/2; i++)
        nums[i] = 2*i + 1;


    for (int i = n/2; i < n; i++)
        nums[i] = i-1;


    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);


    //printf("%d\n", nums[k]);

    return 0;

}
