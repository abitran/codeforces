#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *, const void *);

int main(int argc, char **argv) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int arr[n];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), compare);

    int flag = 1;
    for (int i = 1; i < n; i++) {
      flag &= abs(arr[i] - arr[i - 1]) <= 1;
    }
    printf("%s\n", flag == 1 ? "YES" : "NO");
  }
  return EXIT_SUCCESS;
}

int compare(const void *x, const void *y) {
  return (*(int *)x - *(int *)y);
}
