#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  scanf("%d", &n);
  int matrx[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0) {
        matrx[i][j] = 1;
      }
      else if (j == 0) {
        matrx[i][j] = 1;
      }
      else
        matrx[i][j] = matrx[i-1][j] + matrx[i][j-1];
      }
  }

  int max = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (matrx[i][j] > max)
        max = matrx[i][j];
    }
  }

  printf("%d\n", max);

  return EXIT_SUCCESS;
}
