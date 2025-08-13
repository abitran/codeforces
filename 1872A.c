#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int t;
  int a, b, c;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d %d", &a, &b, &c);
    double target = (a+b)/2.0;
    double diff = fabs(target - a);
    printf("%d\n", (int)ceil(diff/c));
  }

  return EXIT_SUCCESS;
}
