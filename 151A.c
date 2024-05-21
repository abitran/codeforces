#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int n, k, l, c, d, p, nl, np;
  scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
  int toats = (k * l) / nl;
  int limes = c * d;
  int salt = p/np;
  
  int min;
  if (toats < limes && toats < salt)
    min = toats;
  else if (limes < toats && limes < salt)
    min = limes;
  else
    min = salt;

  printf("%d\n", min/n);

  return EXIT_SUCCESS;
  
}
