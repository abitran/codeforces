#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

void solve();

typedef long long ll;

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  ll r, b, d;
  scanf("%lld %lld %lld", &r, &b, &d);
  if (MIN(r, b) * (d + 1) >= MAX(r, b)) {
    puts("YES");
    return;
  }
  puts("NO");
}
