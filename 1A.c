#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
    int m, n, a;
    scanf("%d %d %d", &n, &m, &a);

    // base case

    printf("\n%.0f", ceil((double)n/a) * ceil((double)m/a));

    return 0;

}
