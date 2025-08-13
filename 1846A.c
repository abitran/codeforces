#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  int ans = 0;
  int h, l;
  while (n--) {
    scanf("%d %d", &h, &l);
    if (h > l)
      ans++;
  }

  printf("%d\n", ans);
}
