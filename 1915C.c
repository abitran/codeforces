#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
  long long n;
  scanf("%lld", &n);
  long long sum = 0;
  long long num;
  while (n--) {
    scanf("%lld", &num);
    sum += num;
  }
  long long x = sqrt((double)(sum));
  printf("%s\n", pow(x,2) == sum ? "YES":"NO");
}
