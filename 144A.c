#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    int n;
    int max = 0, min = 101, pos1, pos2;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] > max){
            max = arr[i];
            pos1 = i;
        }

        if (arr[i] <= min){
            min = arr[i];
            pos2 = i;
        }

    }

    if (pos1 > pos2)
        pos2++;

    //printf("%d %d\n", pos1, pos2);
    int jumps = pos1 + (n-pos2) - 1;
    printf("\n%d", jumps);

    return 0;
}
