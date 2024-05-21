#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 101

int main(int argc, char **argv)
{
    char str[MAX_CHAR];
    int i = 0;
    scanf("%s", str);

    while (str[i] != '\0'){
        if (str[i] < 'a')
            str[i] += 32;
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y')
            printf(".%c", str[i]);
        i++;

    }
    printf("\n");
    return 0;
}
