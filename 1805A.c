#include <stdio.h>
#include <stdlib.h>

#define MAXX 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2

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
  int xor_all = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    xor_all ^= a[i];
  }

  if (n % 2 == 1) {
    printf("%d\n", xor_all);
    return;
  }
  if (xor_all == 0) {
    puts("0");
    return;
  }
  puts("-1");
}
