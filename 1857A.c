#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) { 
      scanf("%d", &a[i]);
      sum += a[i];
    }

    printf("%s\n", sum % 2 == 0 ? "YES":"NO");


  }
  return EXIT_SUCCESS;
}
