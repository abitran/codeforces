#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  long long a, b, k;
  scanf("%lld %lld %lld", &a, &b, &k);
  printf("%lld\n", k % 2 == 0 ? (k / 2) * (a - b) : (k / 2) * (a - b) + a);
}
