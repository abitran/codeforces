#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STRING_SIZE 101

int main(int argc, char **argv){
    char str1[STRING_SIZE], str2[STRING_SIZE];
    scanf("%s", str1);
    scanf("%s", str2);
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0'){
        str1[i] = toupper(str1[i]);
        str2[i] = toupper(str2[i]);
        i++;
    }
    if (strcmp(str1, str2) == 0)
        printf("0\n");
    else if (strcmp(str1, str2) < 0)
        printf("-1\n");
    else
        printf("1\n");
}

