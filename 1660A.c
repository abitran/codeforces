#include <stdio.h>
#include <stdlib.h>

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
  int a, b;
  scanf("%d %d", &a, &b);
  int sum = a + b * 2;
  
  printf("%d\n", a == 0 ? 1 : sum + 1);
}
