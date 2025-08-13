#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 100

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  puts(n % 4 == 0 ? "Bob" : "Alice");
}
