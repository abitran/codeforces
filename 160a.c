#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    int coins[n];
    int totsum = 0, sum = 0;
    int coin = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &coins[i]);

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (coins[i] < coins[j]){
                int temp = coins[i];
                coins[i] = coins[j];
                coins[j] = temp;
            }
        }
    }


    for (int i = 0; i < n; i++)
        totsum += coins[i];

    for (int i = 0; i < n; i++){
        sum += coins[i];
        coin++;
        if (sum  > totsum / 2)
            break;
    }

    printf("%d\n", coin);

    return 0;

}
