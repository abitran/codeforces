#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n, m, c;
  int mish = 0, cris = 0, draw = 0;
  scanf("%d", &n);
  while (n--) {
    scanf("%d%d", &m, &c);
    if (m > c) 
      mish++;
    if (m < c) 
      cris++;
    if (m == c) 
      draw++;
  }

  if (mish > cris)
    printf("Mishka");
  if (mish < cris)
    printf("Chris");
  if (mish == cris || draw == n)
    printf("Friendship is magic!^^");

  printf("\n");
  
  return EXIT_SUCCESS;
}
