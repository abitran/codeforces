#include <stdio.h>
#include <stdlib.h>

#define MAX_N 10

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char grid[MAX_N][MAX_N] = {0};
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
    scanf("%s", grid[i]);

  int ones[MAX_N] = {0};
  int rows = 0;

  for (int r = 0; r < n; r++) {
    for (int c = 0; c < n; c++) {
      if (grid[r][c] == '1') {
        ones[rows]++;
      }
    }
    rows++;
  }

  for (int i = 0; i < MAX_N; i++) {
    if (ones[i] == 0)
      continue;

    // boundaries checking.
    int prev = (i > 0) ? ones[i - 1] : ones[i];
    int next = (i < MAX_N - 1) ? ones[i + 1] : ones[i];

    if (ones[i] != prev && ones[i] != next) {
      printf("TRIANGLE\n");
      return;
    }
  }
  printf("SQUARE\n");
}
