#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  int a[n];
  int seen[1001] = {0};
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int res[50];
  int j = 0;

  for (int i = n - 1; i >= 0; i--) {
    if (!seen[a[i]]) {
      seen[a[i]] = 1;
      res[j++] = a[i];
    }
  }

  printf("%d\n", j);
  for (int i = j - 1; i >= 0; i--)
    printf("%d ", res[i]);
}
