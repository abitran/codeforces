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
  int s;
  int digits[10] = {0};
  scanf("%d", &s);
  for (int d = 9; d >= 1; d--) {
    if (s >= d) {
      digits[d] = 1;
      s -= d;
    }
  }

  for (int i = 1; i <= 9; i++) {
    if (digits[i])
      printf("%d", i);
  }
  printf("\n");
}
