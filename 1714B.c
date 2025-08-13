#include <stdio.h>
#include <stdlib.h>

#define MAXN 200005

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
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  int seen[MAXN] = {0};

  int i;
  for (i = n - 1; i >= 0; i--) {
    if (seen[a[i]])
      break;
    seen[a[i]] = 1;
  }

  printf("%d\n", i + 1);
}
