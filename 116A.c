#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int n, a, b, capacity = 0, max = 0;
    scanf("%d", &n);
    while (n--){
        scanf("%d %d", &a, &b);
        capacity += (b -a);
        if (capacity > max)
            max = capacity;
    }

    printf("%d\n", max);

    return 0;
}

