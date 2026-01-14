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
  int k, x;
  scanf("%d %d", &k, &x);
  for (int i = 0; i < k; i++)
    x *= 2;
  printf("%d\n", x);
}
