#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[])
{
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
  int minus = 0;
  int ops = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    if (a[i] == -1) minus++;
    if (a[i] == 0) ops++;
  }

  if (minus % 2 == 1) ops += 2;

  printf("%d\n", ops);
}
