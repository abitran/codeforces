#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  scanf("%d", &n);
  if (n & 1)
    printf("-1\n");
  else{
    for (int i = 1; i <= n; i += 2)
      printf("%d %d ", i+1, i);
  }

  return EXIT_SUCCESS;
}
