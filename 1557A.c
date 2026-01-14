#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d\n", &t);
  while (t--)
    solve();

  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  long long sum = 0;
  long long x;
  long long max = -1000000000LL;
  for (int i = 0; i < n; i++) {
    scanf("%lld", &x);
    sum += x;
    max = MAX(max, x);
  }

  printf("%.9f\n", max + (double)(sum - max) / (n - 1));
}
