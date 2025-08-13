#include <stdio.h>
#include <stdlib.h>

#define MAX(X,Y) ((X) > (Y) ? (X):(Y))

int main(int argc, char *argv[])
{
  int t, x, y, n, k;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d%d", &x, &y, &n);
    int obj = y % x;
    k = n - n % x + y;
    if (k <=n)
      printf("\n%d\n", k);
    else {
      k = n - n % x - (x - y);
      printf("\n%d\n", k);
    }

  }

  return EXIT_SUCCESS;
}
