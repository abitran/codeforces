#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char str[200005];
  scanf("%s", str);
  int days = 1;
  int passes = 0;
  int mask = 0;
  for (int i = 0; str[i]; i++) {
    int bit = 1 << (str[i] - 'a');
    if ((bit & mask) == 0) {
      if (passes == 3) {
        days++;
        mask = 0;
        passes = 0;
      }
      mask |= bit;
      passes++;
    }
  }

  printf("%d\n", days);
}
