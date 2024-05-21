#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char s[100];
    char word[] = "hello";
    int i = 0;
    int j = 0;
    int times = 0;
    scanf("%s", s);

    while (s[i] != '\0'){
        if (s[i] == word[j]){
            j++;
            times++;
        }
        i++;
    }

    printf("%s", times == 5 ? "YES\n" : "NO\n");

    return 0;
}
