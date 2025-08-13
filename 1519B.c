#include <stdio.h>
#include <stdlib.h>

#define MAXK 10000
#define ROWS 100
#define COLS 100
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
  int n, m, k;
  scanf("%d  %d %d", &n, &m, &k);
  int cost = n * m - 1;
  puts(cost == k ? "YES" : "NO");
}
