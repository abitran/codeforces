#include <stdio.h>
#include <stdlib.h>

int cmp(const void *, const void *);

int main(int argc, char *argv[]) {
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int product = 1;
    int digits[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &digits[i]);

    qsort(digits, n, sizeof(int), cmp);
    digits[0] += 1;

    for (int i = 0; i < n; i++)
      product *= digits[i];

    printf("%d\n", product);
  }

  return EXIT_SUCCESS;
}

int cmp(const void *x, const void *y) { return (*(int *)x - *(int *)y); }
