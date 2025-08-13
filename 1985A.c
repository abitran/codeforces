#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char a[4];
  char b[4];
  int t;
  scanf("%d", &t);
  while (t--) {
    fscanf(stdin, "%s  %s", a, b);
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    printf("%s  %s\n", a, b);

  }

  return EXIT_SUCCESS;
}
