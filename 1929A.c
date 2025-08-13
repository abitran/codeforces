#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve();

int cmp(const void *, const void *);

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
  const int max_n = 100;
  int a[max_n];
  memset(a, 0, sizeof(int) * max_n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  qsort(a, n, sizeof(int), cmp);

  int ans = 0;
  for (int i = 1; i < n; i++)
    ans += (a[i] - a[i - 1]);

  printf("%d\n", ans);
}

int cmp(const void *a, const void *b) { return *(int *)a - *(int *)b; }
