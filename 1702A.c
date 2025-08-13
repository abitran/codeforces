#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

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
  long long m;
  scanf("%lld", &m);
  long long exp = 1;
  while (exp*10 <= m) {
    exp *= 10;
  }

  printf("%lld\n", m-exp);
}
