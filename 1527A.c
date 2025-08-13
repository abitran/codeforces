#include <stdio.h>
#include <stdlib.h>

void solve(int );

int main(int argc, char *argv[])
{
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    solve(n);
  }
  return EXIT_SUCCESS;
}

void solve(int n) {
  int k = 1;
  while (k*2 <= n)
    k <<= 1;
  printf("%d\n", k-1);
}
