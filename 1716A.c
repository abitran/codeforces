#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) 
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  long long n;
  scanf("%lld", &n);
  if (n == 2 || n == 3) {
    printf("1\n");
    return;
  }

  if (n == 1) {
    printf("2\n");
    return;
  }

  printf("%lld\n", (n+2)/3);
}




