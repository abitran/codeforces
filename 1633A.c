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

  if (n < 10)
    return;

  if (n % 7 == 0) {
    printf("%d\n", n);
    return;
  }

  int new_cent = (n / 100) * 100;
  int new_dec = ((n / 10) % 10) * 10;
  for (int i = 0; i <= 9; i ++) {
    int new_n = new_cent + new_dec + i;
    if (new_n % 7 == 0) {
      printf("%d\n", new_n);
      return;
    }
  }
}
