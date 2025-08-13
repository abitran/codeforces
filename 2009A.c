#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) (x < y ? x : y)

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
  int a, b;
  int min = INT_MAX;
  int result = 0;
  scanf("%d %d", &a, &b);
  for (int c = a; c <= b; c++) {
    result = (c - a) + (b - c);
    min = MIN(result, min);
  }

  printf("%d\n", min);
}
