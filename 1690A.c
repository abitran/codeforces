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
  int n;
  scanf("%d", &n);
  int h1, h2, h3;
  int base = (n - 3) / 3;
  h3 = base;
  h2 = base + 1;
  h1 = base + 2;

  int sum = h1 + h2 + h3;
  int rest = n - sum;
  while (rest > 0) {
    h1++;
    rest--;
    if (rest > 0) {
      h2++;
      rest--;
    }
    if (rest > 0) {
      h3++;
      rest--;
    }
  }
  printf("%d %d %d\n", h2, h1, h3);
}
