#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

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
  int n, f, k;
  scanf("%d %d %d", &n, &f, &k);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  int fpos = f - 1;
  int val = a[fpos];

  qsort(a, n, sizeof(int), cmp);

  int first_pos = -1;
  int last_pos = -1;

  for (int i = 0; i < n; i++) {
    if (a[i] == val) {
      if (first_pos == -1) first_pos = i;
      last_pos = i;
    }
  }

  if (k > last_pos)
    printf("YES\n");
  else if (first_pos >= k)
    printf("NO\n");
  else
    printf("MAYBE\n");
}

int cmp(const void *a, const void *b) { return *(int *)b - *(int *)a; }
