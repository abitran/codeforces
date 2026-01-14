#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, m;
  scanf("%d %d", &n, &m);
  char grid[n][m + 2];
  for (int i = 0; i < n; i++)
    scanf("%s", grid[i]);

  int moves = 0;

  for (int c = 0; c < m; c++) {
    if (grid[n - 1][c] == 'D')
      moves++;
  }

  for (int r = 0; r < n; r++) {
    if (grid[r][m - 1] == 'R')
      moves++;
  }

  printf("%d\n", moves);
}
