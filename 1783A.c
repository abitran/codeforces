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
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  qsort(a, n, sizeof(int), cmp);

  if (a[0] == a[n - 1]) {
    printf("NO\n");
    return;
  }

  printf("YES\n");
  int tmp = a[1];
  a[1] = a[n-1];
  a[n-1] = tmp;
  
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int cmp(const void *a, const void *b) { return *(int *)b - *(int *)a; }
