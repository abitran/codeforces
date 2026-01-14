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
  int mstr[105] = {0};
  int ones = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &mstr[i]);
    if (mstr[i] == 1)
      ones++;
  }

  printf("%d\n", n - ones / 2);
}
