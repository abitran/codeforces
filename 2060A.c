#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

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
  int a1, a2, a4, a5;
  scanf("%d %d %d %d", &a1, &a2, &a4, &a5);

  int max = 0;
  for (int a3 = -200; a3 <= 200; a3++) {
    int count = 0;
    if (a3 == a1 + a2)
      count++;
    if (a4 == a2 + a3)
      count++;
    if (a5 == a3 + a4)
      count++;

    max = MAX(max, count);
  }

  printf("%d\n", max);
}
