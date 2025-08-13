#include <stdio.h>
#include <stdlib.h>

#define MAXN 50
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

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
  int a[MAXN] = {0};
  int ans = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i < n - 1; i++) {
    int max = MAX(a[i], a[i + 1]);
    int min = MIN(a[i], a[i + 1]);
    while (max > 2 * min) {
      min *= 2;
      ans++;
    }
  }

  printf("%d\n", ans);
}
