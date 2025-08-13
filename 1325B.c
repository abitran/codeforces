#include <stdio.h>
#include <stdlib.h>

int cmp(const void *, const void *);

void solve();

int main(int argc, char *argv[])
{
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

  qsort(a, n, sizeof(int), cmp);

  int len = 1;
  int seen = a[0];
  for (int i = 0; i < n; i++) {
    if (a[i] == seen)
      continue;
    else { 
      len++;
      seen = a[i];
    }
  }

  printf("%d\n", len);

}

int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}
