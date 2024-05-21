#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  int n, m;
  scanf("%d%d", &n, &m);
  char draw[n][m];
  memset(draw, '.', sizeof(draw));
  unsigned int end = 1;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < m; j++) {
        draw[i][j] = '#';
      }
    } else {
      for (int j = 0; j < m; j++) {
        if (j == m - 1 && end) {
          draw[i][j] = '#';
          end = 0;
        } else if (j == 0 && !end) {
          draw[i][j] = '#';
          end = 1;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      printf("%c", draw[i][j]);
    printf("\n");
  }

  return EXIT_SUCCESS;
}
