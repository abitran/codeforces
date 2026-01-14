#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, m, x, y;
  scanf("%d %d %d %d", &n, &m, &x, &y);
  int a[n];
  int b[m];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i < m; i++)
    scanf("%d", &b[i]);

  printf("%d\n", n + m);
}
