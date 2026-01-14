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
  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);
  int m = n - a - b;
  if (a == n && b == n) {
    puts("YES");
    return;
  }
  if (m >= 2) {
    puts("YES");
    return;
  } else {
    puts("NO");
    return;
  }
}
