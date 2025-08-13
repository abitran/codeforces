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
  scanf("%d%d%d", &a, &b, &c);
  int n = 2*abs(a-b);
  int d;
  if (a >=1 && a <= n && b >= 1 && b <= n && c >= 1 && c <= n) {
    d = c + n/2;
    printf("%d\n", d <= n ? d : c - n/2);
  }
  else
   printf ("%d\n", -1);
}
