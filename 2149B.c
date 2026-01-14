#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

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
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  qsort(a, n, sizeof(int), cmp);

  int val = 0;

  for (int i = 0; i < n; i += 2) {
    val = MAX(val, abs(a[i] - a[i + 1]));
  }

  printf("%d\n", val);
}

int cmp(const void *a, const void *b) {
  int x = *(int *)a;
  int y = *(int *)b;
  if (x > y)
    return 1;
  if (x < y)
    return -1;
  return 0;
}
