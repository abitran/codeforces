#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN(X,Y) (X)<(Y)?(X):(Y)

int main(int argc, char *argv[])
{
  char str[101];
  char pointer = 'a';
  scanf(" %[^\n]s", str);
  size_t len = strlen(str);
  int moves = 0;
  for (int i = 0; i < len; i++) {
    moves += MIN(abs(str[i] - pointer), 26 - abs(str[i] - pointer));
    pointer = str[i];
  }

  printf("%d\n", moves);

  return EXIT_SUCCESS;
}
