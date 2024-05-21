#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){

    int n, t;
    char strq[50];
    scanf("%d %d", &n, &t);
    scanf("%s", strq);
  
    while (t--){

        for (int i=0; i < n; i++){
            if (strq[i] == 'B' && strq[i+1] == 'G'){
                strq[i] = 'G';
                strq[i+1] = 'B';
                i++;
            }
        }

    }

    printf("%s\n", strq);

    return 0;

}

