#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    int rounds[5] = {0};
    int count = 0;
    int place = 1;
    scanf("%d", &n);
    while (n > 0) {
      int digit = n % 10;
      if (digit != 0) {
        rounds[count++] = digit * place;
      }
      n /= 10;
      place *= 10;
    }

    printf("%d\n", count);

    for (int i = 0; i < count; i++) {
      printf("%d ", rounds[i]);
    }

    printf("\n");
  }
  return EXIT_SUCCESS;
}
