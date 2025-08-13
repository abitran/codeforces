#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, m;
  scanf("%d %d", &n, &m);
  char grid[n][m];

  for (int r = 0; r < n; r++) 
    for (int c = 0; c < m; c++) 
      grid[r][c] = '.';
  
  for (int r = 0; r < n; r++) {
    if (r % 4 == 0 || r % 4 == 2) {
      for (int c = 0; c < m; c++) {
        grid[r][c] = '#';
      }
    } else if (r % 4 == 1)
      grid[r][m - 1] = '#';

    else if (r % 4 == 3)
      grid[r][0] = '#';
  }

  for (int r = 0; r < n; r++) {
    for (int c = 0; c < m; c++) {
      printf("%c", grid[r][c]);
    }
    printf("\n");
  }
}
