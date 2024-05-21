#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){

    char text[201];

    fgets(text, 201, stdin);

    int len = strlen(text), flag = 1;

    for (int i = 0; i < len; i++){
        if (text[i] == 'W' && text[i+1] == 'U' && text[i+2] == 'B'){
            i += 2;
            if (!flag)
                printf(" ");
        }
        else{
            flag = 0;
            printf("%c", text[i]);
        }


    }


    return 0;

}
