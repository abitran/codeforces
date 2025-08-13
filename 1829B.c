#include <stdio.h>
#include <stdlib.h>

#define max(x,y) x > y ? x:y

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int bin[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &bin[i]);
    int curr = 0;
    int max = 0;
    for (int i = 0; i < n; i++) {
      if (bin[i] == 0) {
        curr++;
        max = max(max, curr);
      }
      else
        curr = 0;
    }

    printf("%d\n", max);
  }

  return EXIT_SUCCESS;
}
