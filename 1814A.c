#include <stdio.h>
#include <stdlib.h>

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
  if ((n % 2 == 0) || ((n >= k) && ((n - k) % 2 == 0))) {
    printf("YES\n");
    return;
  }
  printf("NO\n");
}
