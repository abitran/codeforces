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
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if (b > d) {
    printf("-1\n");
    return;
  }
  int r = d - b;     // right-up moves
  int l = a - c + r; // left-only moves
  if (l < 0) {
    printf("-1\n");
  } else {
    printf("%d\n", r + l);
  }
}
