#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 12

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  char s[MAXN];
  scanf("%s", s);
  char scopy[n][n + 2];
  for (int i = 0; i < n; i++)
    memcpy(scopy[i], s, n + 2);

  int count_ones = 0;

  for (int i = 0; i < n; i++)
    scopy[i][i] = (scopy[i][i] == '1') ? '0' : '1';

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scopy[i][j] == '1' ? count_ones++ : count_ones;
    }
  }
  printf("%d\n", count_ones);
}
