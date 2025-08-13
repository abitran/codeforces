#include <stdio.h>
#include <stdlib.h>

#define MAX(X,Y) ((X) > (Y) ? (X):(Y))

int main(int argc, char *argv[])
{
  int y, w;
  int chances = 0;
  scanf("%d%d", &y, &w);
  int max = MAX(y,w);
  for (int i = max; i <=6; i++)
    chances++;

  if (6 % chances == 0)
    printf("%c/%c", chances/chances + '0', 6/chances + '0');

  else if(chances % 2 == 0)
      printf("%c/%c", chances/2 +'0', 6/2 +'0');

  else
    printf("%c/%c", chances + '0', 6 + '0');

  return EXIT_SUCCESS;
}
