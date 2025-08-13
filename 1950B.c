#include <stdio.h>
#include <stdlib.h>

void printchk(int);

int main(int argc, char *argv[])
{
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    printchk(n);

  }

  return EXIT_SUCCESS;
}

void printchk(int n) {
  int size = 2*n;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if ((i/2 + j/2) % 2 == 0)
        printf("#");
      else
        printf(".");
    }
    printf("\n");
  }
}


