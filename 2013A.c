#include <math.h>
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
  int n, x, y;
  scanf("%d", &n);
  scanf("%d %d", &x, &y);
  printf("%d\n", (int)ceil((double)n / MIN(x, y)));
}
