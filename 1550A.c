#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int s;
  scanf("%d", &s);
  int count = 0;
  int prev = 1;
  s -= prev;
  count++;
  while (s > 0) {
    int next = prev + 2;
    next = MIN(s, next);
    s -= next;
    prev = next;
    count++;
  }

  printf("%d\n", count);
}
