#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int t, k;
  int count;

  scanf("%d", &t);

  while (t--) {
    scanf("%d", &k);
    count = 0;

    for (int i = 1; i <= 10000; i++) {
      if ((i % 3 != 0) && (i % 10 != 3)) {
        count++;
        if (count == k) {
          printf("%d\n", i);
          break;
        }
      }
    }

  }

  return EXIT_SUCCESS;
}
