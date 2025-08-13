#include <stdio.h>
#include <stdlib.h>

#define MAXN 200000

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
    printf("%d ", 10 * i + 1);
  }
  printf("\n");
}
