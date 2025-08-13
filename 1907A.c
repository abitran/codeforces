#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  char cols[8] = {'a','b','c','d','e','f','g','h'};
  while (t--) {
    char col;
    int row;
    scanf(" %c%d", &col, &row);
    for (int i = 1; i <=8; i++) {
      if (i != row)
        printf("%c%d\n", col, i);
    }
    for (int i = 0; i < 8; i++) {
      if (cols[i] != col)
        printf("%c%d\n", cols[i], row);
    }

  }

  return EXIT_SUCCESS;
}
