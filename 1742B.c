#include <stdio.h>
#include <stdlib.h>

int cmp(const void *, const void *);

int main(int argc, char *argv[])
{
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), cmp);
    int flag = 1;

    for (int i = 0; i < n-1; i++){
      if (a[i] < a[i+1])
        continue;
      else {
        printf("NO\n");
        flag = 0;
        break;
      }
    }

    if (flag)
      printf("YES\n");

  }

  return EXIT_SUCCESS;
}

int cmp(const void *x, const void *y) {
  return (*(int *)x-*(int *)y);
}
