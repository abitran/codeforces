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
  long long n, a, b, c;
  scanf("%lld %lld %lld %lld", &n, &a, &b, &c);
  long long cycle = a + b + c;
  long long full_cycles = n / cycle;
  long long distance = full_cycles * cycle;
  long long day = full_cycles * 3;

  long long remaining = n - distance;

  if (remaining <= 0) {
    printf("%lld\n", day);
    return;
  }

  // Try to cover the rest in at most 3 days
  if (remaining <= a) {
    printf("%lld\n", day + 1);
    return;
  } else if (remaining <= a + b) {
    printf("%lld\n", day + 2);
    return;
  } else {
    printf("%lld\n", day + 3);
    return;
  }
}
