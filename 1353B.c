#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(X,Y) (X) > (Y) ? (X):(Y)

int cmp(const void *, const void *);

int main(int argc, char *argv[])
{
  int t;
  int n, k;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &n, &k);
    int a[n];
    int b[n];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));

    for (int i = 0; i < n; i++) 
      scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
      scanf("%d", &b[i]);

    qsort(a, n, sizeof(int), cmp);
    qsort(b, n, sizeof(int), cmp);

    int sum_a = 0;

    int r = 0;
    int j = n-1;

    for (int i = 1; i <= k; i++) {
      a[r] = MAX(a[r], b[j]);
      r++, j--;
    }

    for (int i = 0; i < n; i++)
      sum_a += a[i];

    printf("%d\n", sum_a);
  }

  return EXIT_SUCCESS;
}

int cmp(const void *x, const void *y) {
  return (*(int *)x-*(int *)y);
}


