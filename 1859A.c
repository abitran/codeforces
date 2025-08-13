#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_L 100

void solve();

int comp(const void *, const void *);

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  qsort(a, n, sizeof(int), comp);

  if (a[0] == a[n - 1]) {
    printf("-1\n");
    return;
  }

  else {
    int it = 0;
    while (a[it] == a[0])
      it++;
    printf("%d %d\n", it, n - it);
    for (int i = 0; i < it; i++)
      printf("%d ", a[i]);
    printf("\n");
    for (int i = it; i < n; i++)
      printf("%d ", a[i]);
    printf("\n");
  }
}

int comp(const void *a, const void *b) { return *(int *)a - *(int *)b; }
