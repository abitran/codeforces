#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int t;
  char str[30] = "314159265358979323846264338327";
  char input[31];
  scanf("%d", &t);
  while (t--) {
    scanf(" %30[^\n]s", input);
    int len_input = strlen(input);
    int i;
    for (i = 0; i < len_input; i++) {
      if (str[i] != input[i]) {
        break;
      }
    }
    printf("%d\n", i);
  }
  return EXIT_SUCCESS;
}
