#include <stdio.h>
#include <stdlib.h>

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
  int freq[n + 1];
  for (int i = 0; i < n + 1; i++)
    freq[i] = 0;

  int a[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    freq[a[i]]++;
  }

  int winner = -1;
  for (int i = 1; i <= n; i++) {
    if (freq[i] == 1) {
      winner = i;
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    if (a[i] == winner) {
      printf("%d\n", i + 1);
      return;
    }
  }

  printf("%d\n", winner);
}
