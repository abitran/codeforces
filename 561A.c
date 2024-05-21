#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int r, b, small;
  scanf("%d%d", &r, &b);
  if ( r < b) {
    printf("%d ", r);
    printf("%d", (b-r)/2);
  }
  else {
    printf("%d ", b);
    printf("%d", (r-b)/2);
  }

  return EXIT_SUCCESS;

}
