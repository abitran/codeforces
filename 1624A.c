#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int a[n];
    int max = 0;
    int min = 1000000000;
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
      if (a[i] > max)
        max = a[i];
      if (a[i] < min)
        min = a[i];
    }

    printf("%d\n", max - min);

  }

  return EXIT_SUCCESS;
}
