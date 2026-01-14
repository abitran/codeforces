#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, k;
  scanf("%d %d", &n, &k);
  char lets[k];
  for (int i = 0; i < k; i++) {
    lets[i] = 'a' + i;
  }
  lets[k] = '\0';

  for (int i = 0; i < n; i++)
    printf("%s", lets);

  printf("\n");
}
