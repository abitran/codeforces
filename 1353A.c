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
  int n, m;
  scanf("%d %d", &n, &m);
  if (n == 1)
    printf("0\n");
  else if (n == 2)
    printf("%d\n", m);
  else
    printf("%d\n", 2*m);
}
