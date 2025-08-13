#include <stdio.h>
#include <stdlib.h>

#define MAX_R 2e9

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  long long l, r;
  scanf("%lld %lld", &l, &r);
  long long low = 1;
  long long high = MAX_R;
  int max_len = 1;
  while (low <= high) {
    long long mid = (low + high) / 2;
    long long sum = (mid - 1) * mid / 2;
    if (l + sum <= r) {
      max_len = mid;
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  printf("%d\n", max_len);
}
