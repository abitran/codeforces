#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  char keyb[27];
  while (2*t--) {
    scanf(" %26[^\n]s", keyb);
    char s[51];
    scanf(" %50[^\n]s", s);
    int slen = strlen(s);
    int sum = 0;
    char pchar = s[0];
    char cc;
    int start = 0;
    for (int i = 0; i < 26; i++) {
      if (pchar == keyb[i])
        start = i;
    }
    
    for (int i = 1; i < slen; i++) {
      cc = s[i];
      for (int j = 0; j < 27; j++) {
        if (cc == keyb[j]){
          sum += abs(j-start);
          start = j;
        }
      }
    }
    printf("%d\n", sum);

  }

  return EXIT_SUCCESS;
}
