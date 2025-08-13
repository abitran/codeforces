#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int t, n, x;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d", &n, &x);
    if (n <= 2)
      printf("1\n");
    else {
      n -= 2;
      printf("%d\n", (n + x - 1) / x + 1 );
    }
  }

  return EXIT_SUCCESS;
}
