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
  int n, m;
  scanf("%d %d", &n, &m);
  printf("%d\n", n * (m / 2));

}
