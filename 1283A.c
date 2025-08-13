#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  int hours, minutes;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d", &hours, &minutes);
    printf("%d\n", 1440 - (hours*60 + minutes));

  }

  return EXIT_SUCCESS;
}
