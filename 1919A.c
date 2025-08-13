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
  long long a, b;
  scanf("%lld %lld", &a, &b);
  printf("%s\n", (a + b) % 2 != 0 ? "Alice" : "Bob");
}
