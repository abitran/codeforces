#include <stdio.h>
#include <stdlib.h>

void solve();

int cmp(const void *, const void *);

typedef struct {
  int a, b;
} SOFT;

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, k;
  SOFT arr[105];
  scanf("%d %d", &n, &k);
  int a[n], b[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i < n; i++)
    scanf("%d", &b[i]);

  for (int i = 0; i < n; i++) {
    arr[i].a = a[i];
    arr[i].b = b[i];
  }

  qsort(arr, n, sizeof(SOFT), cmp);

  for (int i = 0; i < n; i++) {
    if (arr[i].a <= k)
      k += arr[i].b;
  }

  printf("%d\n", k);
}

int cmp(const void *a, const void *b) {
  SOFT *s1 = (SOFT *)a;
  SOFT *s2 = (SOFT *)b;
  return s1->a - s2->a;
}
