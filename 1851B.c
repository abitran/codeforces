#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve();

int cmp(const void *, const void *);

int main(int argc, char *argv[]) {
  int test_cases;
  scanf("%d", &test_cases);
  while (test_cases--)
    solve();

  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  int a[n];
  int b[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  memcpy(b, a, sizeof(a));

  qsort(b, n, sizeof(int), cmp);

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 != b[i] % 2) {
      puts("NO");
      return;
    }
  }

  puts("YES");
}

int cmp(const void *a, const void *b) { return *(int *)a - *(int *)b; }
