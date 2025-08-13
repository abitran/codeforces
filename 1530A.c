#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MIN(x,y) (x < y ? x : y)
#define MAX(x,y) (x > y ? x : y)

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
  int stones[n];
  int min = INT_MAX;
  int max = INT_MIN;
  for (int i = 0; i < n; i++) {
    scanf("%d", &stones[i]);
    min = MIN(min, stones[i]);
    max = MAX(max, stones[i]);
  }

  

  printf("%d %d", max, min);

}
