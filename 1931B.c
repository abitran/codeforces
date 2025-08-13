#include <stdio.h>
#include <stdlib.h>

#define MAX_N 200000

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  int a[MAX_N];
  int sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    sum += a[i];
  }

  if (n == 1) {
    printf("YES\n");
    return;
  }

  if (sum % n != 0) {
    printf("NO\n");
    return;
  }

  int target = sum / n;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] < target) {
      printf("NO\n");
      return;
    }
    a[i + 1] += a[i] - target;
    a[i] = target;
  }

  printf("YES\n");
}
