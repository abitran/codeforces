#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

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
  int maxavg = -1;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    maxavg = MAX(maxavg, a[i]);
  }

  printf("%d\n", maxavg);
}
