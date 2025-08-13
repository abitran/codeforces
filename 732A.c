#include <stdio.h>
#include <stdlib.h>

#define MIN(X,Y) (X)<(Y)?(X):(Y)

int main(int argc, char *argv[])
{
  int k, r;
  int mult;
  int shovels = 9999;
  scanf("%d%d", &k, &r);
  for (int i = 1; i <= 10; i++) {
    mult = k * i % 10;
    if (mult == r || mult == 0) {
      shovels = MIN(shovels, i);
    }
  }

  printf("%d\n", shovels);

  return EXIT_SUCCESS;
}
