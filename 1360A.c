#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN(X,Y) (X) < (Y) ? (X):(Y)
#define MAX(X,Y) (X) > (Y) ? (X):(Y)

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int a, b;
    int area;
    scanf("%d%d", &a, &b);
    area = (int)pow(MIN(MAX(2*a,b), MAX(a,2*b)), 2);

    printf("%d\n", area);

  }

  return EXIT_SUCCESS;
}
