#include <stdio.h>
#include <stdlib.h>

#define MAXN 5 * 10e4
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

void solve();

typedef long long ll;

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  ll n;
  scanf("%lld", &n);
  ll a[n];
  for (ll i = 0; i < n; i++)
    scanf("%lld", &a[i]);

  ll min = 9e18;
  ll max;

  for (ll i = 0; i < n; i++) {
    max = MAX(a[i], a[i + 1]);
    min = MIN(max, min);
  }
  printf("%lld\n", min - 1);
}
