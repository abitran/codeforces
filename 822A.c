#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

long long fact(long long);

int main(int argc, char *argv[]) {
  long long a, b;
  scanf("%lld %lld", &a, &b);
  printf("%lld\n", fact(MIN(a,b)));

  return EXIT_SUCCESS;
}

long long fact(long long x) {
  if (x == 0 || x == 1)
    return 1;
  return (x * fact(x - 1));
}

