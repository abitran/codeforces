#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int t;
  int n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    if (n == 3) {
      printf("aaa\n");
    } else {
      char word[4] = {'a', 'a', 'a', '\0'};
      n -= 3;
      for (int i = 2; i >= 0; i--) {
        int add = (n > 25) ? 25 : n;
        word[i] = 'a' + add;
        n -= add;
        if (n == 0)
          break;
      }
      printf("%s\n", word);
    }
  }
  return EXIT_SUCCESS;
}
