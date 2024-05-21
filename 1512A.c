#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  int t;
  int n;
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    int arr[n];
    int equal = 0;
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    for (int i = 1; i < n; i++) {
      if ((arr[i] == arr[i - 1]) || arr[i] == arr[n-1]){
        equal = arr[i];
        break;
      }
    }

    for (int i = 0; i < n; i++)
      if (arr[i] != equal) {
        printf("%d\n", i+1);
        break;
      }
  }

  return EXIT_SUCCESS;
}
