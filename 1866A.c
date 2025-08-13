#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 100000
#define MIN(x, y) ((x) < (y) ? (x) : (y))

void solve();

int cmp(const void *, const void *);

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {

  int ops = INT_MAX;
  int n;
  int a[MAXN] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  qsort(a, n, sizeof(int), cmp);

  for (int i = 0; i < n; i++) {
    if (a[i] < 0) {
      ops = MIN(ops, abs(a[i]));
    } else {
      ops = MIN(ops, abs(a[i]));
      break;
    }
  }

  printf("%d\n", ops);
}

int cmp(const void *a, const void *b) { return *(int *)a - *(int *)b; }
