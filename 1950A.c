#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  int a, b, c;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d%d", &a, &b, &c);
    if (c > b && c > a && b > a)
      printf("STAIR\n");
    else if ( b > a && b > c )
      printf("PEAK\n");
    else
      printf("NONE\n");
  }

  return EXIT_SUCCESS;
}
