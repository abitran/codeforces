#include <stdio.h>
#include <stdlib.h>

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
  int n, d;
  scanf("%d %d", &n, &d);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  qsort(a, n, sizeof(int), cmp);

  if (a[0] + a[1] > d) {
    for (int i = 2; i < n; i++) {
      if (a[i] > d) {
        printf("NO\n");
        return;
      }
    }
  }

  printf("YES\n");
}

int cmp(void const *a, void const *b) { return *(int *)a - *(int *)b; }
