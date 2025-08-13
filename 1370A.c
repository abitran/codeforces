#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  int n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);

    printf("%d\n", n/2);
  }

  return EXIT_SUCCESS;
}

