#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void solve(int);

int main(int argc, char *argv[]) {
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    solve(n);
  }

  return EXIT_SUCCESS;
}

void solve(int n) {

  int ord = 0;
  for (int d = 1; d <=9; d++) {
    long long num = d;
    while (num <= n) {
      ord++;
      num = num * 10 + d;
    }
  }
  printf("%d\n", ord);
}
