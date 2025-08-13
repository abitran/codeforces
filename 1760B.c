#include <stdio.h>
#include <stdlib.h>

int cmp(const void *, const void *);

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    char str[n+1];
    scanf(" %[^\n]s", str);
    if (n == 1)
      printf("%d\n", str[0] - 'a' + 1);
    else{
      qsort(str, n, sizeof(char), cmp);
      printf("%d\n", str[n-1] - 'a' + 1);
    }

  }

  return EXIT_SUCCESS;
}

int cmp(const void *x, const void *y) {

  return (*(char *)x-*(char *)y);
}
