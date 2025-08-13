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
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if ( c % 2 != 0 && a >= b)
    printf("First\n");
  else if (c % 2 == 0 && a > b)
    printf("First\n");
  else 
    printf("Second\n");
}
