#include <stdio.h>
#include <stdlib.h>

void solve();

int gcd(int, int);

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int a, b, n;
  int turn = 0; // simon starts
  scanf("%d %d %d", &a, &b, &n);
  while (1) {
    int g = (turn == 0) ? gcd(a, n) : gcd(b, n);
    if (n < g) {
      printf("%d\n", turn ^ 1);
      return;
    }
    n -= g;
    turn ^= 1;
  }
}

int gcd(int x, int y) {
  while (y != 0) {
    int tmp = y;
    y = x % y;
    x = tmp;
  }

  return x;
}
