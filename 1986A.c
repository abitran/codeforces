#include <limits.h>
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

void solve() {
  int x[3];
  scanf("%d %d %d", &x[0], &x[1], &x[2]);
  qsort(x, 3, sizeof(int), cmp);

  printf("%d\n", abs(x[1]-x[0]) + abs(x[1]-x[1]) + abs(x[1]-x[2]));
}

int cmp(const void *a, const void *b) { return *(int *)a - *(int *)b; }
