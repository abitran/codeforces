#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

void solve();

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
  int min = 9e8;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    min = MIN(min, a[i]);
  }

  int cmin = 0;

  for (int i = 0; i < n; i++)
    if (a[i] == min)
      cmin++;

  printf("%d\n", n - cmin);
}
