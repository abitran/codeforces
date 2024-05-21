#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(int argc, char **argv){
    char input[MAX];
    int count[26] = {0};
    int distinct = 0;
    scanf("%s", input);
   
    for (int i = 0; i < strlen(input); i++)
        count[input[i] - 'a']++;
  
    for (int i = 0; i < 26; i++)
        if (count[i] >= 1)
            distinct++;

    printf("%s\n", distinct % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");

}

