#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main (int argc, char **argv){

    char t[MAX], s[MAX];
    int flag = 0;
    scanf("%s", t);
    scanf("%s", s);
    for (int i = 0,  j = strlen(s)-1; i < strlen(t), j >= 0; i++, j--){
        if (t[i] == s[j])
            flag = 1;
        else{
            flag = 0;
            break;
        }
    }
    
    printf("%s", flag ? "YES" : "NO");

return 0;

}

        

