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
  int n;
  scanf("%d", &n);
  int p[n];
  for ( int i = 0; i < n; i++) {
    p[i] = (i+1) % n + 1;
  }

  for (int i = 0; i < n; i++)
    printf("%d ", p[i]);

  printf("\n");
}
