#include <stdio.h>
#include <stdlib.h>

#define MAXN 5000

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
  char str[MAXN + 2];
  scanf("%s", str);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (str[i] == '+')
      sum += 1;
    else
      sum += -1;
  }

  printf("%d\n", abs(sum));
}
