#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{

  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += abs(arr[i]);
    }

    printf("%d\n", sum);

  }

  return EXIT_SUCCESS;
}

int cmp(const void *a, const void *b) {
  return *(int *)b - *(int *)a;
}
