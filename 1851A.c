#include <stdio.h>
#include <stdlib.h>

void solve();

int can_talk(int, int, int, int);

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, m, k, H;
  scanf("%d %d %d %d", &n, &m, &k, &H);
  int valids = 0;
  int h[n];
  int (*check)(int, int, int, int) = can_talk;
  for (int i = 0; i < n; i++)
    scanf("%d", &h[i]);

  for (int i = 0; i < n; i++) {
    valids += check(H, h[i], m, k); 
  }

  printf("%d\n", valids);
}

int can_talk(int H, int hi, int m, int k) {
  int diff = abs(H - hi);
  if (diff == 0)
    return 0;
  if (diff % k != 0)
    return 0;
  int steps = diff / k;
  if (steps > m - 1)
    return 0;

  return 1;
}
