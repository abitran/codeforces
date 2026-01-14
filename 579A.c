#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int x;
  scanf("%d", &x);
  int count = 0;
  while (x > 0) {
    if (x & 1)
      count++;
    x >>= 1;
  }

  printf("%d\n", count);
}
