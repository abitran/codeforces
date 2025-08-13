#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int lookup[n+1];
    int flag = -1;
    memset(lookup, 0, sizeof(lookup));

    int a;
    for (int i = 0; i < n; i++) {
      scanf("%d", &a);
      lookup[a]++;
    }

    for (int i = 1; i <= n; i++) {
      if (lookup[i] >= 3) {
        flag = i;
        break;
      }
    }

    printf("%d\n", flag);
  }

  return EXIT_SUCCESS;
}
