#include <stdio.h>
#include <stdlib.h>

#define MIN(X,Y) (X) < (Y) ? (X):(Y)

int main(int argc, char *argv[])
{
  int t;
  int n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int c1 = n / 3;
    int c2 = n / 3;
    if (n % 3 == 0)
      printf("%d %d\n", c1, c2);
    if (n % 3 == 1)
      printf("%d %d\n", c1+1, c2);
    if (n % 3 == 2)
      printf("%d %d\n", c1, c2+1);

  }
  return EXIT_SUCCESS;
}

