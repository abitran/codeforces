#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  long long n;
  scanf("%d", &t);
  while (t--) {
    scanf("%lld", &n);
    printf("%s\n", n % 4 == 0 ? "YES": "NO");
  }

  return EXIT_SUCCESS;
}
