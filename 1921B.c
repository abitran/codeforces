#include <stdio.h>
#include <stdlib.h>

#define MAX(x,y) ((x) > (y) ? (x):(y))

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
  int n;
  scanf("%d", &n);
  char s[n + 1];
  char f[n + 1];
  int sum1s = 0, sum1f = 0;
  scanf("%s", s);
  scanf("%s", f);
  int need = 0, excess = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1' && f[i] == '0')
      excess++;
    if (s[i] == '0' && f[i] == '1')
      need++;
  }

  printf("%d\n", MAX(excess, need));

}

