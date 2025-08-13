#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 200000

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
  int a[MAXN];
  memset(a, 0, sizeof(int) * MAXN);
  scanf("%d", &n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    sum += a[i];
  }

  if (sum % n != 0) {
    printf("-1\n");
    return;
  }

  int target = sum / n;
  int choose = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > target)
      choose++;
  }

  printf("%d\n", choose);
}
