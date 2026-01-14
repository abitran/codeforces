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
  int n, m, l, r;
  scanf("%d %d %d %d", &n, &m, &l, &r);
  int lp = l;
  if (-m > lp)
    lp = -m;
  int rp = lp + m;
  printf("%d %d\n", lp, rp);
}
