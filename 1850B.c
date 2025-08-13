#include <stdio.h>
#include <stdlib.h>

#define max(x,y) x>y?x:y

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int a, b;
    int maxq = 0;
    int index = 0;
    for (int i = 1; i <= n; i++) {
      scanf("%d %d", &a, &b);
      if (a <= 10) {
        if (b > maxq) {
          maxq = b;
          index = i;
        }
      }
    }
    printf("%d\n", index);
  }

  return EXIT_SUCCESS;
}
