#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    long long n;
    int bills[] = {100, 20, 10, 5, 1};
    scanf("%lld", &n);
    int money = n / bills[0];
    int rest = n % bills[0];
    for (int i = 1; i <= 4; i++){
        money += rest / bills[i];
        rest = rest % bills[i];
    }

    printf("%d\n", money);


    return 0;

}
