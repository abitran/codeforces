#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int t;
  char str[101];
  scanf("%d", &t);
  while (t--) {
    scanf(" %100[^\n]s", str);
    size_t len = strlen(str);
    if (len % 2 != 0)
      printf("NO\n");
    else if (strncmp(str, str+len/2, len/2) == 0)
      printf("YES\n");
    else
      printf("NO\n");
  }

  return EXIT_SUCCESS;

}
