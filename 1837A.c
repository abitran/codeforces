#include <stdio.h>
#include <stdlib.h>

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
  int x, k;
  int temp[100] = {0};
  scanf("%d %d", &x, &k);
  if (x % k != 0)
    printf("1\n%d\n", x);
  else {
    printf("2\n");
    printf("%d %d\n", x - 1, 1);
  }
}
