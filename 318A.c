#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    long long n, k;

    scanf("%lld %lld", &n, &k);

    if (k <= (n+1)/2)
        printf("%lld\n", 2*k - 1);

    else
        printf("%lld\n", (k-(n+1)/2)*2);

    return 0;


}
