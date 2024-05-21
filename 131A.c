#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    char text[101];
    fgets(text, 201, stdin);
    int len = strlen(text);
    int flag = 1;
    for (int i = 1; i < len-1; i++){
        if ((text[i] >= 'A') && (text[i] <= 'Z')){
            continue;
        }

        else{
            flag = 0;
            break;
        }

    }

    if (flag){
        if (islower(text[0])){
            text[0] = toupper(text[0]);
        }

        else
            text[0] = tolower(text[0]);

        for (int i = 1; i < len-1; i++)
            text[i] = tolower(text[i]);

        printf("%s\n", text);
    }

    else
        printf("%s\n", text);



    return 0;

}
