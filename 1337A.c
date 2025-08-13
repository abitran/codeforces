#include <stdio.h>
#include <stdlib.h>

#define MIN(X,Y) (X < Y ? X:Y)
#define MAX(X,Y) (X > Y ? X:Y)

int main(int argc, char *argv[])
{
  int t, a, b, c, d;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int x = MAX(a,b);
    int y = MAX(b,c);
    int z = MIN(c,d);

    printf("%d %d %d\n", x, y , z);
  }

  return EXIT_SUCCESS;
}



