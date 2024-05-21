#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){

    int cases, len;
    char word[101];
    scanf("%d", &cases);
    for (int i=0; i<cases; i++){
        scanf("%s", word);
        if ((len = strlen(word)) > 10)
            printf("%c%d%c\n", word[0], len-2, word[len-1]);
        else
            printf("%s\n", word);
    }
}

        
