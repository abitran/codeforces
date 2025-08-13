#include <stdio.h>
#include <stdlib.h>

#define MAX(X,Y) (X) > (Y) ? (X) : (Y)

int main(int argc, char *argv[])
{
  int n;
  scanf("%d", &n);
  int max_height = 0;
  int level = 0;
  int cubes = 0;
  int total_cubes = 0;
  
  if (n == 1)
    printf("%d\n", n);

  else {
    for (int i = 1; i <= n; i++) {
      cubes += i;
      total_cubes += cubes;
      if (total_cubes <= n) {
        level++;
        max_height = MAX(level, max_height);
      }
      else {
        printf("%d\n", max_height);
        break;
      }
    }
  }

  return EXIT_SUCCESS;
}
