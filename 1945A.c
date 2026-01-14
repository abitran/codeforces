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

typedef long long ll;

void solve() {
  ll a, b, c;
  ll tents = 0;
  scanf("%lld %lld %lld", &a, &b, &c);
  tents += a;
  ll full = b / 3;
  ll rem = b % 3;
  tents += full;
  if (rem == 1) {
    if (c < 2) {
      puts("-1");
      return;
    }
    c -= 2;
    tents++;
  } else if (rem == 2) {
    if (c < 1) {
      puts("-1");
      return;
    }
    c -= 1;
    tents++;
  }

  tents += (c + 2) / 3;
  printf("%lld\n", tents);
}
