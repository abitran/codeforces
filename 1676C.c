#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

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
  char strs[n][m + 1];
  for (int i = 0; i < n; i++)
    scanf("%s", strs[i]);

  int min = INT_MAX;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int sum = 0;
      for (int k = 0; k < m; k++) {
        sum += abs(strs[i][k] - strs[j][k]);
      }
      min = MIN(min, sum);
    }
  }

  printf("%d\n", min);
}
