#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }

  return EXIT_SUCCESS;
}

void solve() {
  int a, b, n;
  scanf("%d %d %d", &a, &b, &n);
  int moves = 0;
  while (a <= n && b <= n) {
    if (a < b)
      a += b;
    else
      b += a;
    moves++;
  }

  printf("%d\n", moves);
}
