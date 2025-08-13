#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MIN(X,Y) (X) < (Y) ? (X):(Y)

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

void solve(){
  int n, a, b;
  int min = INT_MAX;
  scanf("%d %d %d", &n, &a, &b);
  if (n % 2 == 0) {
    min = MIN(n*a, (n*b)/2);
  }
  else {
    for (int i = 1; i <= n; i++) {
      int calc = i*a + (n-i)*b/2;
      min = MIN(min, calc);
    }
  }

  printf("%d\n", min);

}
