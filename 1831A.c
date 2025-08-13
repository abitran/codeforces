#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

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
  int a[MAX_N] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    printf("%d ", n + 1 - a[i]);
  }
  printf("\n");
}
