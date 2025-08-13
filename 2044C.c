#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

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
  long long m, a, b, c;
  scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
  long long a_monkeys = MIN(m, a);
  long long b_monkeys = MIN(m, b);
  long long c_monkeys = MIN(2*m-(a_monkeys+b_monkeys), c);
  printf("%lld\n", a_monkeys+b_monkeys+c_monkeys);
}
