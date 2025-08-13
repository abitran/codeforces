#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int t;
  int a, b, c;
  scanf("%d", &t);
  while (t--){
    scanf("%d%d%d", &a, &b, &c);
    printf("%c\n", a + b == c ? '+' : '-');

  }


  return EXIT_SUCCESS;
}
