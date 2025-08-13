#include <stdio.h>
#include <stdlib.h>

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
  int n;
#define maxes 10000
  int freq[maxes + 1] = {0};
  scanf("%d", &n);
  int a[n];
  int unique = 0;
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    if (freq[x] == 0)
      unique++;
    freq[x]++;
  }

  if ((n - unique) % 2 == 0)
    printf("%d\n", unique);
  else
    printf("%d\n", unique - 1);
}
