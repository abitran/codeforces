#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX(X, Y) (X) > (Y) ? (X) : (Y)
#define MIN(X, Y) (X) < (Y) ? (X) : (Y)

int main(int argc, char *argv[]) {
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
      for (int j = i+1; j < n; j++) {
        min = MIN(min, abs(arr[j]-arr[i]));
      }
    }

    printf("%d\n", min);

  }

  return EXIT_SUCCESS;
}
