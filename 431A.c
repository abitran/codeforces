#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int as[4];
  for (int i = 0; i < 4; i++)
    scanf("%d", &as[i]);

  char process[100000];
  scanf(" %s", process);
  int calories = 0;
  size_t len = strlen(process);
  for (int i = 0; i < len; i++) {
    calories += as[(process[i] - '0')-1]; 
  }

  printf("%d\n", calories);

  return EXIT_SUCCESS;
}
