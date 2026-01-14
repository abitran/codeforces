#include <stdio.h>
#include <stdlib.h>

#define MAXN 1000000

#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))

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
  int odds = 0;
  int evens = 0;
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    x % 2 == 0 ? evens++ : odds++;
  }

  printf("%d\n", MIN(evens, odds));
}
