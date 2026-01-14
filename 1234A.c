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
  int n;
  scanf("%d", &n);
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    sum += x;
  }
  printf("%lld\n", (sum + n - 1) / n);
}
