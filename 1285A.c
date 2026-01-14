#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  char s[100005];
  scanf("%d", &n);
  scanf("%s", s);
  printf("%d\n", n + 1);
}
