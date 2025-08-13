#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))
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
  int n, s;
  scanf("%d %d", &n, &s);
  int x[12];
  for (int i = 0; i < n; i++)
    scanf("%d", &x[i]);

  int l = x[0];
  int r = x[n - 1];
  int steps = MAX(r, s) - MIN(l, s);
  printf("%d\n", steps);
}
