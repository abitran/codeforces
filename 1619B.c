#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 1000000000

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  long long n;
  scanf("%lld", &n);

  long long squares = (long long)(sqrt(n) + 1e-9);
  long long cubes = (long long)(cbrt(n) + 1e-9);
  long long sixths = (long long)(pow(n, 1.0 / 6.0) + 1e-9);

  printf("%lld\n", squares + cubes - sixths);
}
