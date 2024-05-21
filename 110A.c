#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    long long n = 0;

    scanf("%lld", &n);
    int rest = 0;
    int count = 0;
    while (n > 0){
        rest = n % 10;
        if (rest == 7 || rest == 4)
            count++;
        n /= 10;

    }

    printf("%s\n", count == 4 || count == 7 ? "YES" : "NO");

    return 0;

}


