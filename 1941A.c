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
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);
  int b[n], c[m];
  for (int i = 0; i < n; i++)
    scanf("%d", &b[i]);
  for (int i = 0; i < m; i++)
    scanf("%d", &c[i]);
  int ways = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if ((b[i] + c[j] <= k))
        ways++;
    }
  }
  printf("%d\n", ways);
}
