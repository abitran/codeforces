#include <stdio.h>
#include <stdlib.h>

void solve();

int cmp(const void *, const void *);

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }

  return EXIT_SUCCESS;
}

int cmp(const void *a, const void *b) { return *(int *)a - *(int *)b; }

void solve() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  qsort(a, n, sizeof(int), cmp);
  int r = n - 1;
  int l = 0;
  int sum = 0;
  while (r > l) {
    sum += a[r] - a[l];
    r--;
    l++;
  }

  printf("%d\n", sum);
}
