#include <stdio.h>
#include <math.h>

void solve();

int main() {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return 0;
}

void solve() {
  long long n;
  scanf("%lld", &n);

  long long squares = (long long)sqrt(n);                 // All perfect squares ≤ n
  long long cubes = (long long)cbrt(n);                   // All perfect cubes ≤ n
  long long sixths = (long long)pow(n, 1.0 / 6.0);        // All sixth powers ≤ n

  printf("%lld\n", squares + cubes - sixths);             // Inclusion-exclusion
}
