#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv)
{
    char words[1000];
    int alpha[26] = {0}, counter = 0;

    fgets(words, 1000, stdin);

    int len = strlen(words);

    for (int i = 0; i < len; i++){
        if ((words[i] >= 'a') && (words[i] <= 'z'))
            alpha[words[i]-'a']++;
    }

    for (int i = 0; i < 26; i++)
        if (alpha[i] >= 1)
            counter++;

    printf("%d", counter);

    return 0;

}
