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
  int an;
  scanf("%d", &an);
  int moves = 0;
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += an;

  if (sum % 3 == 0) {
    printf("%d\n", moves);
    return;
  }

  int cnt_mod1 = 0, cnt_mod2 = 0;

  if (sum % 3 == 1 || sum % 3 == 2) {
    while (1) {
      sum--;
      moves++;
      if (sum % 3 == 0) {
        printf("%d\n", moves);
        return;
      }
    }
  }
}
