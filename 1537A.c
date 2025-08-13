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
    int times = 0;
    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      sum += a[i];
    }
    
    if (sum < n) {
      times = 1;
    }
    else
      times = sum - n;

    printf("%d\n", times);
    
  }

  return EXIT_SUCCESS;
}
