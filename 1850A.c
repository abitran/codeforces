#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {

  int t;
  scanf("%d", &t);
  while (t--) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if ((a+b >= 10) || (a+c >=10) || (b+c >= 10))
      printf("YES\n");
    else
      printf("NO\n");
  }

  return EXIT_SUCCESS;
}
