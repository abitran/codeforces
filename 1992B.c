#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {

    solve();
  }

  return EXIT_SUCCESS;
}

void solve() {

  int n, k;
  int max = INT_MIN;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < k; i++) {
    int num;
    scanf("%d", &num);
    max = MAX(max, num);
  }

  printf("%d\n", 2 * (n - max) - k + 1);
}
