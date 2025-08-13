#include <stdio.h>
#include <stdlib.h>

#define MAXN 100
#define MAX(x, y) ((x) > (y) ? (x) : (y))

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
  int a[MAXN+2] = {0};
  int b[MAXN+2] = {0};

  for (int i = 1; i <= n; i++)
    scanf("%d", &a[i]);

  for (int i = 1; i <= n; i++)
    scanf("%d", &b[i]);

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (a[i] >= b[i + 1]) {
      sum += (a[i] - b[i + 1]);
    }
  }

  printf("%d\n", sum);
}
