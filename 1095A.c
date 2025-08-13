#include <stdio.h>
#include <stdlib.h>

#define MAX_N 56

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  char s[MAX_N];
  scanf("%s", s);
  int step = 1;
  for (int i = 0; i < n; i += step) {
    printf("%c", s[i]);
    step++;
  }
  printf("\n");
}
