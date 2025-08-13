#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
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
  char a[n];
  scanf("%s", a);
  char let = a[0];
  printf("%c", let);
  for (int i = 1; i < n - 1; i++) {
    if (a[i] != let)
      continue;
    else {
      let = a[++i];
      printf("%c", let);
    }
  }
  printf("\n");
}
