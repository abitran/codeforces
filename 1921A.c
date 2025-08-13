#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) : (y))

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int max_x = INT_MIN;
    int min_x = INT_MAX;
    int max_y = INT_MIN;
    int min_y = INT_MAX;
    int x, y;

    for (int i = 0; i < 4; i++) {
      scanf("%d %d", &x, &y);
      max_x = max(max_x, x);
      min_x = min(min_x, x);
      max_y = max(max_y, y);
      min_y = min(min_y, y);
    }

    int side = max(max_x-min_x, max_y-min_y);

    printf("%d\n", side*side);
  }

  return EXIT_SUCCESS;
}
