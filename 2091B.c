#include <stdio.h>
#include <stdlib.h>

void solve();
int cmp(const void *, const void *);

typedef long long ll;

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  ll n, x;
  scanf("%lld %lld", &n, &x);
  ll a[n];
  for (int i = 0; i < n; i++)
    scanf("%lld", &a[i]);

  qsort(a, n, sizeof(ll), cmp);

  ll teams = 0;
  ll members = 1;

  for (int i = 0; i < n; i++, members++) {
    if (members * a[i] >= x) {
      teams++;
      members = 0;
    }
  }

  printf("%lld\n", teams);
}

int cmp(const void *a, const void *b) {
  ll x = *(ll *)a;
  ll y = *(ll *)b;
  return (y > x) - (y < x);
}
