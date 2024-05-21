#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int w; 
    int flag = 0;
    scanf("%d", &w);
    for (int i=2; i < w; i=i+2)
        if ((w-i)%2 == 0){
            puts("YES");
            flag = 1;
            break;
        }
    if (flag == 0)
        puts("NO");
}

