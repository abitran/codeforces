#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHAR 101


char str[MAX_CHAR];

void deleteVowels();

void insertChar();

void replaceUpper();

int main(int argc, char **argv)
{
    scanf("%s", str);
    deleteVowels(str);
    insertChar();
    replaceUpper(str);
    printf("%s\n", str);
    printf("%ld\n", strlen(str));
    return 0;

}

void deleteVowels()
{
    int i = 0, j = 0;
    char temp[MAX_CHAR];
    while (str[i] != '\0'){
        if (str[i] != 'A' && str[i] != 'a' && str[i] != 'E' && str[i] != 'e' && str[i] != 'I' && str[i] != 'i' && str[i] != 'O' && str[i] != 'o' \
                && str[i] != 'U' && str[i] != 'u' && str[i] != 'Y' && str[i] != 'y'){
            temp[j] = str[i];
            j++;
        }
        i++;
    }

    temp[j+1] = '\0';
    strcpy(str, temp);

}

void insertChar()
{
    char temp[MAX_CHAR];
    int i = 0, j = 0;
    while (str[i] != '\0'){
        temp[j++] = '.';
        temp[j++] = str[i];
        i++;
    }

    temp[j+1] = '\0';
    strcpy(str, temp);
}


void replaceUpper()
{
    int i = 0;
    char temp[MAX_CHAR];

    while (str[i] != '\0'){
        temp[i] = tolower(str[i]);
        i++;
    }

    temp[i+1] = '\0';
    strcpy(str, temp);
}
