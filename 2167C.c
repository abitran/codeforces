#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

int cmp(const void *, const void *);

void solve();

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
  ll *a = malloc(sizeof(ll) * n);
  int has_odd = 0, has_even = 0;
  for (ll i = 0; i < n; i++) {
    scanf("%lld", &a[i]);
    if (a[i] % 2 == 0)
      has_even = 1;
    else
      has_odd = 1;
  }

  if (has_even && has_odd)
    qsort(a, n, sizeof(ll), cmp);

  for (int i = 0; i < n; i++)
    printf("%lld%c", a[i], (i == n - 1 ? '\n' : ' '));

  printf("\n");

  free(a);
}

int cmp(const void *a, const void *b) {
  ll x = *(ll *)a;
  ll y = *(ll *)b;
  if (x < y)
    return -1;
  if (x > y)
    return 1;
  return 0;
}
