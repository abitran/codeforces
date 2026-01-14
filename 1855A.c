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
  int p[100001];
  scanf("%d", &n);
  int moves = 0;
  for (int i = 1; i <= n; i++)
    scanf("%d", &p[i]);

  for (int i = 1; i <= n; i++) {
    if (p[i] == i) {
      moves++;
    }
  }

  printf("%d\n", moves % 2 == 0 ? moves / 2 : (moves + 1) / 2);
}
