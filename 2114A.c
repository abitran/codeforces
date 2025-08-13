#include <math.h>
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
  const int n = 5;
  char str[n];
  scanf("%s", str);
  double target = sqrt((double)atoi(str));
  if (floor(target) != target) {
    printf("-1\n");
    return;
  }
  int a, b;
  for (a = 0; a < 100; a++)
    for (b = 0; b < 100; b++) {
      if (a + b == target) {
        printf("%d %d\n", a, b);
        return;
      }
    }
}
