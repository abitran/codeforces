#include <stdio.h>
#include <stdlib.h>

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
  int x, y;
  scanf("%d %d", &x, &y);
  int total_pixels = 15;
  int min_screens = 0;

  // first we count the min number of screens with y data.
  while (y > 0) {
    if (y >= 2) {
      y -= 2;
      x -= 7;
    } else {
      y -= 1;
      x -= 11;
    }
    min_screens++;
  }

  // now we add the min number of screens with the x remaining.
  if (x > 0)
    min_screens += (x + total_pixels - 1) / total_pixels;

  printf("%d\n", min_screens);
}
