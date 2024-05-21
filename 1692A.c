#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int t;
  int mtn[4];
  scanf("%d", &t);
  while (t--) {
    for (int i = 0; i < 4; i++)
      scanf("%d", &mtn[i]);

    int front = 0;
    for (int i = 1; i < 4; i++){
      if (mtn[i] > mtn[0])
        front++;
    }

    printf("%d\n", front);
  }

  return EXIT_SUCCESS;
  
}
