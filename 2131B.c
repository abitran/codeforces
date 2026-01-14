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
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      printf("%d ", -1);
    } else {
      printf("%d ", ((i >= 2) && (i <= n - 1)) ? 3 : 2);
    }
  }
  printf("\n");
}
