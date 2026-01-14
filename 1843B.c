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
  long long n;
  scanf("%lld", &n);
  long long a[n];
  long long tmp[n];
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%lld", &a[i]);
    sum += abs((int)a[i]);
    if (a[i] < 0)
      tmp[i] = -1;
    else
      tmp[i] = 0;
  }
  int ops = 0;
  for (int i = 0; i < n; i++) {
    if (tmp[i] == -1)
      ops++;
    else
      ops--;
  }

  printf("%lld %d\n", sum, ops);
}
