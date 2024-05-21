#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 101
#define xorme(p,q) (p == q ? 0 : 1)

int main(int argc, char **argv){
    char bin1[MAX_LENGTH];
    char bin2[MAX_LENGTH];
    scanf("%s", bin1);
    scanf("%s", bin2);
    int len = strlen(bin1);
    for (int i=0; i<len; i++)
        printf("%d", xorme(bin1[i], bin2[i]));
    printf("\n");
}


