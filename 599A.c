#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int d1, d2, d3;
  scanf("%d %d %d", &d1, &d2, &d3);
  int dst1 = d1 * 2 + d2 * 2;
  int dst2 = d1 * 2 + d3 * 2;
  int dst3 = d1 + d3 + d2;
  int dst4 = d2 * 2 + d3 * 2;
  int min = MIN(MIN(dst1, dst2), MIN(dst3, dst4));
  printf("%d\n", min);
}
