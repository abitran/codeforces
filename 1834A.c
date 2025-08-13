#include <stdio.h>
#include <stdlib.h>

#define MAXN 100

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
  scanf("%d", &n);
  int a[n];
  int num_neg = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    a[i] == -1 ? num_neg++ : num_neg;
  }
  int ops = 0;

  if (num_neg % 2 != 0) {
    ops++;
    num_neg--;
  }

  while (num_neg % 2 != 0 || (n - 2 * num_neg) < 0) {
    ops++;
    num_neg--;
  }

  printf("%d\n", ops);
}
