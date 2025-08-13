#include <stdio.h>
#include <stdlib.h>

#define MIN(X,Y) (X) < (Y) ? (X):(Y)
#define MAX(X,Y) (X) > (Y) ? (X):(Y)

int main(int argc, char **argv) {

  int t;
  int x, y, z;
  int min, max;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d%d", &x, &y, &z);
    min = MIN(MIN(x,y), z);
    max = MAX(MAX(x,y), z);
    
    if (x > min && x < max)
      printf("%d\n", x);
    if (y > min && y < max)
      printf("%d\n", y);
    if (z > min && z < max)
      printf("%d\n", z);
  }

  return EXIT_SUCCESS;
}
