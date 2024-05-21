#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 100

int main(int argc, char **argv){

    char operation[BUFFER];
    char result[BUFFER];
    int nums[3];
    for (int i = 0; i < 3; i++)
        nums[i] = 0;

    int size;
    fgets(operation, BUFFER, stdin);
    size = strlen(operation);
    
    for (int i = 0; i < size; i += 2){
        if (operation[i] == '1')
           nums[0]++;
        else if (operation[i] == '2')
           nums[1]++;
        else
           nums[2]++;
    }

    int i = 0;
    int j = 0;
    while (nums[i]--){
        result[j] = '1';
        result[j+1] = '+';
        j += 2;
    }
    i++;
    
    while (nums[i]--){
        result[j] = '2';
        result[j+1] = '+'; 
        j += 2;
    }
    i++;

    while (nums[i]--){
        result[j] = '3';
        result[j+1] = '+';
        j += 2;
    }

    result[j-1] = '\0';

    printf("%s", result);
        

}


