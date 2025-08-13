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
  int n, k, p;
  scanf("%d %d %d", &n, &k, &p);
  if (abs(k) > n * p) {
    printf("-1\n");
    return;
  }

  int ops = abs(k) / p;
  if (abs(k) % p != 0)
    ops++;

  printf("%d\n", ops > n ? -1 : ops);
}
