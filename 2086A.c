#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1e8

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
  printf("%d\n", n * 2);
}
