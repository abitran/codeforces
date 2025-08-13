#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int t;
  char sequence[51];
  scanf("%d", &t);
  while (t--) {
    scanf("%s", sequence);
    int len = strlen(sequence);
    if (len % 2 != 0) {
      printf("NO\n");
    }
    else {
      int Bs = 0;
      for (int i = 0; i < len; i++) {
        if (sequence[i] == 'B') Bs++;
      }
      if ( Bs == len/2)
        printf("YES\n");
      else
        printf("NO\n");
    }
  }

  return EXIT_SUCCESS;
}
