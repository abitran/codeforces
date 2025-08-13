#include <stdio.h>
#include <stdlib.h>

#define MAX(X,Y) (X)>(Y)?(X):(Y)

int main(int argc, char *argv[])
{
  int t, a, b, c, n;
  scanf("%d", &t);
  while (t--) {
    int max = 0;
    int calc = 0;
    scanf("%d%d%d%d", &a, &b, &c, &n);
    max = MAX(MAX(a,b),c);
    if (max == a)
      calc = n - ((a - b) + (a - c));
    else if (max == b)
      calc = n - ((b - a) + (b - c));
    else
      calc = n - ((c - a) + (c - b));

    if (calc == 0)
      printf("YES\n");

    else if (calc > 0) {
      if (calc % 3 == 0)
        printf("YES\n");
      else
        printf("NO\n");
    }

    else
      printf("NO\n");
  }

  return EXIT_SUCCESS;
}
