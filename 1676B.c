#include <stdio.h>
#include <stdlib.h>

#define MIN(X,Y) (X)<(Y)?(X):(Y)

int cmp(const void *, const void *);

int main(int argc, char *argv[])
{
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int sum = 0;
    int boxes[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &boxes[i]);

    qsort(boxes, n, sizeof(int), cmp);

    for (int i = 0; i < n; i++) {
      sum += boxes[i] - boxes[0];
    }

    printf("%d\n", sum);

  }

  return EXIT_SUCCESS;
}

int cmp(const void *x, const void *y) {
  return (*(int *)x - *(int *)y);
}
