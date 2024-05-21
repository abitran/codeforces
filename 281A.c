#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

int main(int argc, char **argv){
    char word[MAX];
    fgets(word, MAX, stdin);
    word[0] = toupper(word[0]);
    printf("%s", word);
}

