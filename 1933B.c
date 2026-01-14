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
  int n;
  scanf("%d", &n);
  int a[n];
  int sum = 0;
  int cnt1 = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    sum += a[i];
    a[i] % 3 == 1 ? cnt1++ : cnt1;
  }

  int rem = sum % 3;

  if (rem == 0) {
    puts("0");
    return;
  }

  if (rem == 2) {
    puts("1");
    return;
  }

  if (rem == 1) {
    puts(cnt1 > 0 ? "1" : "2");
    return;
  }
}
