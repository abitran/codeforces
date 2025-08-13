#include <stdio.h>
#include <stdlib.h>

#define N 1005

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, k;
  scanf("%d %d", &n, &k);
  char grid[N][N];
  for (int i = 0; i < n; i++)
    scanf("%s", grid[i]);

  char reduced[N];

  for (int r = 0; r < n; r += k) {
    int idx = 0;
    for (int c = 0; c < n; c += k) {
      reduced[idx++] = grid[r][c];
    }
    reduced[idx] = '\0';

    printf("%s\n", reduced);
  }
}
