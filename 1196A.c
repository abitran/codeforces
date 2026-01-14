#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int q;
  scanf("%d", &q);
  while (q--)
    solve();
  return EXIT_SUCCESS;
}

typedef long long ll;

void solve() {
  ll a, b, c;
  scanf("%lld %lld %lld", &a, &b, &c);
  printf("%lld\n", (a + b + c) / 2);
}
