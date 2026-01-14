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
  int n, m;
  scanf("%d %d", &n, &m);
  char a[n + 1];
  char b[m + 1];
  scanf("%s", a);
  scanf("%s", b);

  int i = 0, j = 0;
  while (i < n && j < m) {
    if (a[i] == b[j]) {
      i++;
    }
    j++;
  }

  printf("%d\n", i);
}
