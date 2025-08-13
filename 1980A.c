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
  int n, m;
  scanf("%d %d", &n, &m);
  int alpha[7] = {0};
  char a[n + 1];
  scanf("%s", a);
  for (int i = 0; i < n; i++) {
    alpha[a[i] - 'A']++;
  }

  int min = 0;
  for (int i = 0; i < 7; i++) {
    if (alpha[i] < m)
      min += m - alpha[i];
  }

  printf("%d\n", min);
}
