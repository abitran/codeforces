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
  if ((a == b) && (b == c) && (a == d)) {
    puts("YES");
    return;
  }
  puts("NO");
}
