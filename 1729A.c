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
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int delta_a = abs(a - 1);
  int delta_b = abs(b-c) + abs(c-1);
  if (delta_a < delta_b)
    printf("1\n");
  else if (delta_b < delta_a)
    printf("2\n");
  else
    printf("3\n");
}
