#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    char strp[101];
    int flag = 0;
    scanf("%s", strp);
    int i = 0;
    while (strp[i] != '\0'){
        switch(strp[i]){
            case 'H':
            case 'Q':
            case '9':
            //case '+':
                flag = 1;
                break;

        }

        i++;

    }

    printf("%s", flag == 1 ? "YES\n" : "NO\n");

    return 0;
}
