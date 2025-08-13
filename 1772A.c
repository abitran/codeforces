#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  char exp[4];
  scanf("%d", &t);
  while (t--) {
    scanf(" %[^\n]s", exp);
    int a, b;
    sscanf(exp, "%d%d", &a, &b);
    printf("%d\n", a + b);
  }

  return EXIT_SUCCESS;
}
