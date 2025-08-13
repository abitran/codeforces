#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 100

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

  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int ans = 0;

  for (int i = 0; i + 1 < n; i++) {
    if (!((a[i] ^ a[i + 1]) & 1))
      ans++;
  }
  printf("%d\n", ans);
}
