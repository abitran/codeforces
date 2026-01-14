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

typedef long long ll;

void solve() {
  ll n;
  scanf("%lld", &n);
  ll a[n + 1];
  for (int i = 1; i <= n; i++)
    scanf("%lld", &a[i]);

  ll max = 0;

  for (int i = 1; i < n; i++) {
    ll arrmax = MAX(a[i], a[i + 1]);
    ll arrmin = MIN(a[i], a[i + 1]);
    ll prod = arrmax * arrmin;
    max = MAX(max, prod);
  }

  printf("%lld\n", max);
}
