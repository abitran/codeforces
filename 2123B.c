#include <stdio.h>
#include <stdlib.h>

#define max(x, y) x > y ? x : y

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, j, k;
  int maxim = -1;
  scanf("%d %d %d", &n, &j, &k);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    maxim = max(maxim, a[i]);
  }

  int target = a[j - 1];
  if (k > 1) {
    printf("YES\n");
    return;
  }

  puts(maxim == target ? "YES" : "NO");
}
