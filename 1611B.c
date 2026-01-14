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
  ll a, b;
  scanf("%lld %lld", &a, &b);
  ll by_people = (a + b) / 4;
  ll by_balance = a < b ? a : b;
  ll teams = by_people < by_balance ? by_people : by_balance;
  printf("%lld\n", teams);
}
