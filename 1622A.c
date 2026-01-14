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
  int l1, l2, l3;
  scanf("%d %d %d", &l1, &l2, &l3);
  if ((l1 % 2) && (l2 % 2) && (l3 % 2)) {
    puts("NO");
    return;
  }

  if ((l1 == l2 && l3 % 2 == 0) || (l1 == l3 && l2 % 2 == 0) ||
      (l2 == l3 && l1 % 2 == 0) || (l1 = l2 + l3) || (l2 = l1 + l3) ||
      (l3 = l1 + l2)) {
    puts("YES");
    return;
  }
   puts("NO");
}
