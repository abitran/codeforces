#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }

  return EXIT_SUCCESS;
}

void solve() {
  long long n, m;
  scanf("%lld %lld", &n, &m);
  long long total_squares = n * m;
  printf("%lld\n", (total_squares + 1)/2);
}
