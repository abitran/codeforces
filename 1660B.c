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
  long long n;
  scanf("%lld", &n);
  long long a[n];
  for (int i = 0; i < n; i++)
    scanf("%lld", &a[i]);

  qsort(a, n, sizeof(long long), cmp);

  if (n == 1) {
    puts(a[0] == 1 ? "YES" : "NO");
    return;
  }

  if (a[0] > a[1] + 1) {
    puts("NO");
    return;
  }

  puts("YES");
}

int cmp(const void *a, const void *b) {
  long long x = *(long long *)a;
  long long y = *(long long *)b;
  return y - x;
}
