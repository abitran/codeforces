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
  int b, c, h;
  scanf("%d%d%d", &b, &c, &h);
  printf("%d\n", 2 * MIN(b - 1, c + h) + 1);
}
