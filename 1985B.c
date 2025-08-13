#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX(X,Y) (X) > (Y) ? (X) : (Y)

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
  int n;
  scanf("%d", &n);
  int sum = INT_MIN;
  int optimus = 0;
  for (int i = 2; i <= n; i++) {
    int currsum = 0;
    for (int j = 1; j*i <= n; j++) {
      currsum += j*i;
      if (currsum > sum) {
        optimus = i;
        sum = currsum;
      }
    }
  }

  printf("%d\n", optimus);
}
