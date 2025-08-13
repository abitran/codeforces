#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve(int, int);

int main(int argc, char *argv[])
{
  int n, m;
  scanf("%d %d", &n, &m);
  solve(n, m);
  return EXIT_SUCCESS;
}

void solve(int n, int m) {
  int count = 0;
  for (int a = 0; a <= 1000; a++) {
    for (int b = 0; b <= 1000; b++) {
      if ((pow(a, 2) + b == n) && (a + pow(b, 2) == m))
        count++;
    }
  }

  printf("%d\n", count);
}
