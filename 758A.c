#include <stdio.h>
#include <stdlib.h>

int cmp(const void*, const void*);

int main(int argc, char **argv) {

  int n;
  scanf("%d", &n);
  int welf[n];
  int burles = 0;
  for (int i = 0; i < n; i++)
    scanf("%d", &welf[i]);

  qsort(welf, n, sizeof(int), cmp);

  for (int i = n - 1 ; i >= 0; i--) {
      burles += welf[n-1] - welf[i];
  }

  printf("%d\n", burles);

  return EXIT_SUCCESS;

}

int cmp(const void *x, const void *y) {

  return (*(int *)x - *(int *)y);
}
