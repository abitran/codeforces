#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int t;
  int n;
  char sequence[11];
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int cyph[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &cyph[i]);
    int w;
    for (int i = 0; i < n; i++) {
      scanf("%d %s", &w, sequence);
      char *p;
      for (p = sequence; *p != '\0'; p++) {
        if (*p == 'D') {
          cyph[i] = cyph[i] + 1;
          if (cyph[i] == 10)
            cyph[i] = 0;
        }
        else {
          cyph[i] = cyph[i] - 1;
          if (cyph[i] == -1)
            cyph[i] = 9;
        }
      }
    }
    for (int i = 0 ; i < n; i++)
      printf("%d ", cyph[i]);
    
    printf("\n");
  }

  return EXIT_SUCCESS;
}
