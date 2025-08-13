#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 100000000

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {

  long long n, k;
  scanf("%lld %lld", &n, &k);
  // count odds in range [n-kj+1,n]

  long long l = (n - k + 1);
  long long r = n;
  long long count = (r + 1) / 2 - l / 2;
  puts(count % 2 == 0 ? "YES" : "NO");
}
