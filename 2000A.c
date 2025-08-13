#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    if (((n >= 102) && (n <= 109)) || ((n >= 1010) && (n <= 1099)))
      printf("YES\n");
    else
      printf("NO\n");
  }

  return EXIT_SUCCESS;
}
