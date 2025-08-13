#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int n;
  scanf("%d", &n);
  char file[n+1];
  scanf(" %101[^\n]s", file);
  int len = strlen(file);
  char *p;
  char *k;
  int del = 0;
  int xcount;
  for (p = file; *p != '\0'; p++) {
    xcount = 0;
    k = p;
    for (int i = 0; i < 3; i++) {
      if (*k == 'x') {
        xcount++;
        k++;
      }
      else
        break;
    }
    if (xcount == 3) {
      del++;
    }
  }
  printf("%d\n", del);

  return EXIT_SUCCESS;
}
