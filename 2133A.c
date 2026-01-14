#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int nums[105] = {0};
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    nums[x]++;
  }

  for (int i = 2; i <= 100; i++) {
    if (nums[i] >= 2) {
      puts("YES");
      return;
    }
  }

  puts("NO");
}
