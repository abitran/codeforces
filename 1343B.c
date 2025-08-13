#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t, n;
  scanf("%d", &t);
  while (t--) {

    scanf("%d", &n);
    if (n == 2)
      printf("NO\n");
    else {
      int arr[n];
      int x2 = 1;
      int x3 = 1;
      int sume = 0;
      int sumb = 0;
      for (int i = 0; i < n/2; i++) {
        arr[i] = 2*x2;
        sume += arr[i];
        x2++;
      }
      for (int i = n/2; i < n; i++) {
        arr[i] = x3;
        sumb += arr[i];
        x3 += 2;
      }

      int diff = sume - sumb;

      if ((arr[n-1] + diff) % 2 != 0) {
        arr[n-1] = arr[n-1] + diff;
        printf("YES\n");
        for (int i = 0; i < n; i++) {
          printf("%d ", arr[i]);
        }
      }
      else
        printf("NO\n");
    }
  }

  return EXIT_SUCCESS;
}
