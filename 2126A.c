#include <stdio.h>
#include <stdlib.h>

#define MAXx 1000

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
  int x;
  int y = 9;
  scanf("%d", &x);
  while (x > 0) {
    y = MIN(y, x % 10);
    x /= 10;
  }

  printf("%d\n", y);
}
