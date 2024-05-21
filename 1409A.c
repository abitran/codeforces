#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int t;
  scanf("%d", &t);
  while (t--){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", (abs(a-b)+9)/10);

  }
  return EXIT_SUCCESS;
}
