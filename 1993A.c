#include <stdio.h>
#include <stdlib.h>

#define MAXN 100

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char anssheet[4 * MAXN];
  int n;
  scanf("%d", &n);
  scanf("%s", anssheet);
  int answ[4] = {0};
  for (int i = 0; i < 4 * n; i++) {
    if (anssheet[i] >= 'A' && anssheet[i] <= 'D' && answ[anssheet[i] - 'A'] < n)
      answ[anssheet[i] - 'A']++;
  }

  int max = 0;

  for (int i = 0; i < 4; i++)
    max += answ[i];

  printf("%d\n", max);
}
