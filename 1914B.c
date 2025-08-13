#include <stdio.h>
#include <stdlib.h>

#define MAXN 50

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, k;
  scanf("%d %d", &n, &k);
  int flip_start = n - k;
  for (int i = 1; i <= n; i++) {
    if (i < flip_start)
      printf("%d ", n - i + 1);
    else
      printf("%d ", i - flip_start + 1);
  }
  printf("\n");
}
