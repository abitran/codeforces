#include <stdio.h>
#include <stdlib.h>

#define max(x, y) (x) > (y) ? (x):(y)
#define min(x,y)  (x) < (y) ? (x):(y)

void solve();

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }

  return EXIT_SUCCESS;
}

void solve() {
  int x, y;
  scanf("%d %d", &x, &y);
  printf("%d %d\n", min(x,y), max(x,y));
}
