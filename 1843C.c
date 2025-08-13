#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return EXIT_SUCCESS;
}

void solve() {
  long long n;
  scanf("%lld", &n);
  long long sum = 0;
  while (n > 1) {
    sum += n;
    n /= 2;
  }

  printf("%lld\n", sum + 1);
}
