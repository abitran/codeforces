#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    char grid[8][8];
    char word[8+1];
    int windex = 0;
    for (int row = 0; row < 8; row++)
      scanf("%s", grid[row]);

    for (int row = 0; row < 8; row++) {
      for (int col = 0; col < 8; col++) {
        if (grid[row][col] != '.')
          word[windex++] = grid[row][col];
      }
    }

    word[windex] = '\0';

    printf("%s\n", word);
  }
  return EXIT_SUCCESS;
}
