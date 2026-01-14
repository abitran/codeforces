#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int r, c;
  scanf("%d %d", &r, &c);
  char grid[r][c];
  for (int i = 0; i < r; i++)
    scanf("%s", grid[i]);

  int safe_row[11] = {0};
  int safe_col[11] = {0};

  int eaten = 0;

  for (int i = 0; i < r; i++) {
    int safe = 1;
    for (int j = 0; j < c; j++) {
      if (grid[i][j] == 'S') {
        safe = 0;
        break;
      }
    }
    safe_row[i] = safe;
  }

  for (int i = 0; i < c; i++) {
    int safe = 1;
    for (int j = 0; j < r; j++) {
      if (grid[j][i] == 'S') {
        safe = 0;
        break;
      }
    }
    safe_col[i] = safe;
  }

  for (int i = 0; i < r; i++) {
    if (safe_row[i])
      eaten += c;
  }

  for (int i = 0; i < c; i++) {
    if (safe_col[i]) {
      for (int j = 0; j < r; j++) {
        if (!safe_row[j])
          eaten++;
      }
    }
  }

  printf("%d\n", eaten);
}
