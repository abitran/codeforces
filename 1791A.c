#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  int t;
  char c;
  char text[] = "codeforces";
  size_t len = strlen(text);
  int fails;
  scanf("%d", &t);
  while (t--) {
    scanf(" %c",&c);
    fails = 0;
    for (int i = 0; i < len; i++) {
      if (text[i] != c) {
        fails++;
        continue;
      }
      else{
        printf("YES\n");
        break;
      }
    }
    if (fails == len)
      printf("NO\n");
  }
  return EXIT_SUCCESS;
}
