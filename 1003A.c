#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  int seen[105] = {0};
  for (int i = 1; i <= n; i++) {
    int x;
    scanf("%d", &x);
    seen[x]++;
  }

  int max = -1;

  for (int i = 1; i <= 100; i++) {
    max = MAX(max, seen[i]);
  }

  printf("%d\n", max);
}
