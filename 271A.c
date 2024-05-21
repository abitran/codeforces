#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int y, i;
    scanf("%d", &y);

    for ( i=y+1; i > y  ; i++){
        int visited[10] = {0};

        int num = i;
        while (num){
            if (visited[num%10] == 1)
                break;

            visited[num%10] = 1;
            num /= 10;

        }

        if (num == 0){
            printf("%d\n", i);
            break;
        }
    }

    return 0;

}
