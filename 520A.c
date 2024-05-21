#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv)
{
    int n;

    scanf("%d", &n);
    char words[n];
    int alpha[26];
    int flag = 0;

    scanf("%s", words);

    for (int i = 0; i < n; i++){
        words[i] = tolower(words[i]);
        alpha[words[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++){
        if (alpha[i] == 1){
            flag = 1;
            continue;
        }
        else{
            flag = 0;
            printf("NO\n");
            break;
        }
    }

    if (flag)
        printf("YES\n");

    return 0;

}
