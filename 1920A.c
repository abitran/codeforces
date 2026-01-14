#include <stdio.h>
#include <stdlib.h>

#define MAX_X 1000000000

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

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
  int n;
  scanf("%d", &n);
  int a;
  ll x;
  ll r = MAX_X;
  ll l = 1;
  int count = 0;
  ll out[105] = {0};
  ll fct = 0;
  while (n--) {
    scanf("%d %lld", &a, &x);
    switch (a) {
    case 1:
      l = MAX(l, x);
      break;
    case 2:
      r = MIN(r, x);
      break;
    case 3:
      out[fct++] = x;
      break;
    default:
      break;
    }
  }

  if (l > r) {
    printf("0\n");
    return;
  }

  count = r - l + 1;
  for (int i = 0; i < fct; i++)
    if (out[i] >= l && out[i] <= r)
      count--;

  printf("%d\n", count);
}
