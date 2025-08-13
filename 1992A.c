#include <stdio.h>
#include <stdlib.h>

void solve();

int cmp(const void *, const void *);

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }

  return EXIT_SUCCESS;
}

void solve() {
  int nums[3];
  int increments = 5;
  for (int i = 0; i < 3; i++) {
    scanf("%d", &nums[i]);
  }

  qsort(nums, 3, sizeof(int), cmp);

  while (increments > 0) {
    if (nums[0] <= nums[1] && nums[0] <= nums[2])
      nums[0]++;
    else if (nums[1] <= nums[2])
      nums[1]++;
    else
      nums[2]++;

    increments--;
  }

  printf("%d\n", nums[0] * nums[1] * nums[2]);
}

int cmp(const void *a, const void *b) { return *(int *)a - *(int *)b; }
