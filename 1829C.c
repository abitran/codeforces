#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

void solve();

int main(int argc, char *argv[]) {
  // number of cases
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  int min11 = 1e9;
  int min01 = 1e9;
  int min10 = 1e9;
  for (int i = 0; i < n; i++) {
    int m;
    char s[3];
    scanf("%d %s", &m, s);
    int mask = (s[0] - '0') * 2 + (s[1] - '0');
    if (mask == 3)
      min11 = MIN(min11, m);
    else if (mask == 2)
      min10 = MIN(min10, m);
    else if (mask == 1)
      min01 = MIN(min01, m);
  }
  int ret = MIN(min11, min10 + min01);
  printf("%d\n", ret >= 1e9 ? -1 : ret);
}
