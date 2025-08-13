#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

  int t, n;
  scanf("%d", &t);
  int nums[51];
  int m;
  while (t--) {
    memset(nums, 0, 51*sizeof(nums[0]));
    scanf("%d", &n);
    for (int i = 0; i < 2*n; i++) {
      scanf("%d", &m);
      if (nums[m] == 0) {
        printf("%d ", m);
        nums[m] = -1;
      }
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}
