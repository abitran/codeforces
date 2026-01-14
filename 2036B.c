#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

void solve();

typedef long long ll;

int cmp(const void *, const void *);

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  ll n, k;
  scanf("%lld %lld", &n, &k);
  ll bottles[k];
  memset(bottles, 0, sizeof(bottles));

  int b, c;
  for (int i = 0; i < k; i++) {
    scanf("%d %d", &b, &c);
    bottles[b - 1] += c;
  }

  qsort(bottles, k, sizeof(ll), cmp);
  ll sum = 0;

  for (int i = 0; i < MIN(n, k); i++)
    sum += bottles[i];

  printf("%lld\n", sum);
}

int cmp(const void *a, const void *b) {
  ll x = *(ll *)a;
  ll y = *(ll *)b;
  return (y > x) - (y < x);
}
