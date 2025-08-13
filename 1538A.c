#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define MIN(X, Y) (X < Y ? X : Y)
#define MAX(X, Y) (X > Y ? X : Y)

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
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int min_pos = 0;
  int max_pos = 0;

  for (int i = 0; i < n; i++) {
    max_pos = a[i] > a[max_pos] ? i : max_pos;
    min_pos = a[i] < a[min_pos] ? i : min_pos;
  }

  int removeleft = MAX(max_pos, min_pos) + 1;
  int removeright = MAX(n - min_pos, n - max_pos);
  int removelr = MIN(min_pos, max_pos) + 1 + (n - MAX(min_pos, max_pos));
  int moves = MIN(MIN(removeleft, removeright), removelr);

  printf("%d\n", moves);
}
