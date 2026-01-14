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
  int k;
  int a, b, c;
  scanf("%d", &k);
  scanf("%d %d %d", &a, &b, &c);
  int keys = 2;
  while (keys > 0) {
    switch (k) {
    case 1:
      if (a != 0) {
        keys--;
        k = a;
      } else {
        puts("NO");
        return;
      }
      break;
    case 2:
      if (b != 0) {
        keys--;
        k = b;
      } else {
        puts("NO");
        return;
      }
      break;
    case 3:
      if (c != 0) {
        keys--;
        k = c;
      } else {
        puts("NO");
        return;
      }
      break;
    default:
      break;
    }
  }
  puts("YES");
}
