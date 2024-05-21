#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    long long a, b, t;
    scanf("%lld", &t);
    while (t--){
        scanf("%lld%lld", &a, &b);

        if (a % b == 0)
            printf("0\n");

        else
            printf("%lld\n", b - a % b);
    }

    return 0;

}
