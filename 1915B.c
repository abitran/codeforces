#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }

  return EXIT_SUCCESS;
}

void solve() {
  const int row = 3;
  const int col = 3;
  char grid[row][col];
  int freq[3] = {0};

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf(" %c", &grid[i][j]);
      if (grid[i][j] != '?')
        freq[grid[i][j] - 'A']++;
    }
  }

  for (int i = 0; i < 3; i++) {
    if (freq[i] == 2) {
      printf("%c\n", 'A' + i);
    }
  }

}
