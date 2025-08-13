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
  for (int i = 0; i < n - 1; i++) {
    int e;
    scanf("%d", &e);
    sum += e;
  }

  printf("%d\n", sum * -1);
}
