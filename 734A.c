#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){

    int n;
    int cnta = 0, cntd = 0;
    scanf("%d", &n);
    char games[n];
    scanf("%s", games);
    for (int i=0; i<n; i++){
        if (games[i] == 'A')
            cnta++;
        else
            cntd++;
    }

    if (cnta == cntd)
      printf("Friendship\n");
    else
      printf("%s\n", cnta > cntd ? "Anton" : "Danik");

    return 0;
}
