#include <stdio.h>
#include <stdlib.h>

#define MAX(x,y) (x > y ? x : y)

void solve();

int gcd(int, int);

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }

  return EXIT_SUCCESS;
}

int gcd(int x, int y) {
  int seed = x > y ? y : x;
  while (seed > 0) {
    if (x % seed == 0 && y % seed == 0)
      break;
    seed--;
  }
  return seed;
}

void solve() {
  int max = 0; 
  int x;
  scanf("%d", &x);
  int y;
  for (int i = 1 ; i < x; i++) {
    int result = gcd(x,i) + i;
    if (result > max) {
      max = result;
      y = i;
    } 
  }
  printf("%d\n", y);
}

