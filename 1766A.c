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
  int sum = 0;
  scanf("%d", &n);
  for (int i = 1; i <= 9; i++) {
    int d = i;
    while (d <= n) {
      sum++;
      d *= 10;
    }
  }

  printf("%d\n", sum);
}
