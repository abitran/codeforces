#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t, n, k;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &n, &k);
    int a[n];
    int gold = 0;
    int people = 0;
    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      if (a[i] >=k)
        gold += a[i];
      if (a[i] == 0 && gold>=1) {
        people++;
        gold -= 1;
      }

    }

    printf("%d\n", people);
  }

  return EXIT_SUCCESS;
}
