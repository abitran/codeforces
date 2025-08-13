#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int x;
    char num[100];
    scanf("%d", &x);
    int digit = x % 10;
    sprintf(num, "%d", x);
    int  len = strlen(num);
    printf("\n%d\n", 10*(digit - 1) + len*(len+1)/2);
  }

  return EXIT_SUCCESS;
}
