#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    int flag = 0;
    int luckys[] = {4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 777};
    scanf("%d", &n);

    for (int i = 0; i < sizeof(luckys)/luckys[0]; i++)
            if (n % luckys[i] == 0){
                flag = 1;
                printf("YES\n");
                break;
            }
    if (!flag)
        printf("NO\n");

    return 0;
}
