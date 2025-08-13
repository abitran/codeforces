#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  char s[11];
  char target[] = "codeforces";
  int t;
  scanf("%d", &t);
  while (t--) {
    scanf(" %10[^\n]s", s);
    int differs = 0;
    for (int i = 0; i < 10; i++) {
      if (s[i] != target[i])
        differs++;
    }

    printf("%d\n", differs);
  }

  return EXIT_SUCCESS;
}
