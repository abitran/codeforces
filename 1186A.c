#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);

  if (((m - n) >= 0) && ((k - n) >= 0))
    printf("YES\n");
  else
    printf("NO\n");

  return EXIT_SUCCESS;
}
