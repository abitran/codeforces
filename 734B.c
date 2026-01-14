#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

#define MAXK 5 * 10e6
typedef enum { k2, k3, k5, k6 } keys;

typedef long long ll;

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  ll *k = malloc(4 * sizeof(ll));
  ll c256 = 0;
  ll c32 = 0;
  scanf("%lld %lld %lld %lld", &k[k2], &k[k3], &k[k5], &k[k6]);
  while (k[k6] > 0 && k[k5] > 0 && k[k2] > 0) {
    ll kmin = MIN(MIN(k[k6], k[k5]), k[k2]);
    c256 += 256 * kmin;
    k[k6] -= kmin;
    k[k5] -= kmin;
    k[k2] -= kmin;
  }
  while (k[k3] > 0 && k[k2] > 0) {
    ll kmin = MIN(k[k3], k[k2]);
    c32 += 32 * kmin;
    k[k3] -= kmin;
    k[k2] -= kmin;
  }

  printf("%lld\n", c256 + c32);
  free(k);
}
