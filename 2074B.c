#include <stdio.h>
#include <stdlib.h>

#define MAXN 200000

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
  int sum = 0;
  int x;
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    sum += x;
  }

  printf("%d\n", sum - (n - 1));
}
