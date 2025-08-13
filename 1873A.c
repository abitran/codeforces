#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  char str[4];
  while (t--) {
    scanf(" %3[^\n]s", str);
    if ((str[0] == 'a' && str[1] == 'b' && str[2] == 'c') ||
        (str[0] == 'c' && str[1] == 'b' && str[2] == 'a') ||
        (str[0] == 'b' && str[1] == 'a' && str[2] == 'c') ||
        (str[0] == 'a' && str[1] == 'c' && str[2] == 'b'))
      printf("YES\n");
    else
      printf("NO\n");
  }

  return EXIT_SUCCESS;
}
