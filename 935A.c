#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  scanf("%d", &n);
  int ways = 0;
  for (int l = 2; l <= n; l++) {
    if (n % l == 0)
      ways++;
  }

  printf("%d\n", ways);

  return EXIT_SUCCESS;
}
