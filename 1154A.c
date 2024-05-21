#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int n1, n2, n3, n4;
  int sumabc = 0;
  int a = 0, b = 0, c = 0;
  scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
  if (n1 > n2 && n1 > n3 && n1 > n4)
    printf("%d %d %d", n1 - n2, n1 - n3, n1 - n4);
  else if (n2 > n1 && n2 > n3 && n2 > n4)
    printf("%d %d %d", n2 - n1, n2 - n3, n2 - n4);
  else if (n3 > n1 && n3 > n2 && n3 > n4)
    printf("%d %d %d", n3 - n1, n3 - n2, n3 - n4);
  else
    printf("%d %d %d", n4 - n1, n4 - n2, n4 - n3);

  return EXIT_SUCCESS;
}
