#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {

    solve();
  }
  return EXIT_SUCCESS;
}

void solve() {
  int const rows = 8;
  int const cols = 8;

  char board[rows][cols + 1];
  for (int r = 0; r < rows; r++)
    scanf("%8s", board[r]);

  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      if (board[r][c] == '#') {
        if (board[r][c + 2] == '#' && board[r + 1][c + 1] == '#') {
          printf("%d %d\n", r + 2, c + 2);
          return;
        }
      }
    }
  }
}
