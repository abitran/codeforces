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
  int k;
  scanf("%d", &k);
  puts(k % 2 == 0 ? "NO" : "YES");
}
