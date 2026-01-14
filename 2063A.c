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
  int l, r;
  scanf("%d %d", &l, &r);
  if (l == 1 && r == 1) {
    printf("%d\n", 1);
    return;
  }
  printf("%d\n", r - l);
}
