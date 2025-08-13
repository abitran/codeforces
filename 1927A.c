#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    char str[n+1];
    scanf(" %[^\n]s", str);
    int first_B = -1;
    int last_B = -1;
    for (int i = 0; i < n; i++) {
      if (str[i] == 'B') {
        if (first_B == -1)
          first_B = i;

        last_B = i;
      }
    }

    printf("%d\n", last_B-first_B+1);
  }

  return EXIT_SUCCESS;
}
