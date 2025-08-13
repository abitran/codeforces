#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  char str[6];
  while (t--) {
    scanf(" %[^\n]s", str);
    int sumA = 0, sumB = 0;
    for (int i = 0; i < 5; i++) {
      str[i] == 'A' ? sumA++:sumB++;
    }

    printf("%c\n", sumA > sumB ? 'A':'B');
  }

  return EXIT_SUCCESS;
}
