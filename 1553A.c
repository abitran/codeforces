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
  unsigned int n;
  scanf("%u", &n);
  printf("%u\n", (n + 1) / 10);
}
