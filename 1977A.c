#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return EXIT_SUCCESS;
}

void solve() {
  int n, m;
  scanf("%d %d", &n, &m);
  if ((n >= m) && (n % 2 != 0) && (m % 2 != 0)) {
    printf("YES\n");
    return;
  }
  if ((n >= m) && (n % 2 == 0) && (m % 2 == 0)) {
    printf("YES\n");
    return;
  }

  printf("NO\n");
}
