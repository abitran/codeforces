#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  int a, b, c;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d%d", &a, &b, &c);
    if (a << 1 == b <<1)
      printf("\n%d", c);
    else if (b << 1 == c << 1)
        printf("\n%d", a);
    else
      printf("\n%d", b);
  }

  return EXIT_SUCCESS;
}
