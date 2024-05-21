#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    char oper[4];
    int n, x = 0;
    scanf("%d", &n);
    while (n --){
        scanf("%s", oper);
        if (oper[1] == '+')
            x++;
        else
            x--;
    }

    printf("%d\n", x);
}


