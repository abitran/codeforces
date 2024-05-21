#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv){

    char word[100];
    scanf("%s", word);
    int low = 0, cap = 0, i = 0;

    while (word[i] != '\0'){
        if (word[i] > 64 && word[i] < 91)
            cap++;
        else
            low++;
        i++;
    }

    if (cap > low) {
        i = 0;
        while (word[i] != '\0'){
            printf("%c", toupper(word[i]));
            i++;
        }

    }
    else{
        i = 0;
        while (word[i] != '\0'){
            printf("%c", tolower(word[i]));
            i++;
        }
    }

}




