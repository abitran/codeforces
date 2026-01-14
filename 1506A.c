#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  long long n, m, x;
  scanf("%lld %lld %lld", &n, &m, &x);
 
  long long j = (x - 1) / n;
  long long i = (x - 1) % n + 1;

  long long rowwise = (i - 1) * m + (j + 1);
  printf("%lld\n", rowwise);
}
