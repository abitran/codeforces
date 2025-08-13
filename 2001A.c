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
  int freq[MAXN+1] = {0};
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    freq[x]++;
  }

  int max_freq = 0;

  for (int i = 1; i <= n; i++) {
    max_freq = MAX(max_freq, freq[i]);
  }

  printf("%d\n", n - max_freq);
}
