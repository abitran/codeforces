#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv)
{
    char str1[100], str2[100], bal[200];
    int table1[26] = {0}, table2[26] = {0};
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    fgets(bal, 100, stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    bal[strcspn(bal, "\n")] = '\0';

    for (int i = 0; i < strlen(str1); i++)
        table1[str1[i] - 'A']++;

    for (int i = 0; i < strlen(str2); i++)
        table1[str2[i] - 'A']++;

    for (int i = 0; i < strlen(bal); i++)
        table2[bal[i] - 'A']++;

    for (int i = 0; i < 26; i++)
        if (table1[i] != table2[i]){
            printf("NO\n");
            return 0;
        }

    printf("YES\n");

    return 0;

}
