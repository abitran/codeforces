#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX(X,Y) (X)>(Y)?(X):(Y)

int main(int argc, char *argv[])
{
  int t;
  int n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    printf("%d\n", (int)ceil((double)n/2));
  }

  return EXIT_SUCCESS;
}

