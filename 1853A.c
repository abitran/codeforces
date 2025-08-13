#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }

  return EXIT_SUCCESS;
}

void solve() {
  long long n;
  scanf("%lld", &n);
  long long a[n];

  for (int i = 0; i < n; i++)
    scanf("%lld", &a[i]);

  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      printf("0\n");
      return;
    }
  }

  int equals = 1;

  for (int i = 0; i < n - 1; i++) {
    if (a[i + 1] != a[i])
      equals = 0;
  }

  if (equals) {
    printf("1\n");
    return;
  }

  int min_diff = 1e9;

  for (int i = 0; i < n - 1; i++) {
    int diff = a[i + 1] - a[i];
    min_diff = MIN(diff, min_diff);
  }

  printf("%d\n", min_diff/2 + 1);
}
