#include <stdio.h>
#include <stdlib.h>

#define MIN(X,Y) (X)<(Y)?(X):(Y)

int isprime(int);

int main(int argc, char *argv[])
{
  int n, m;
  int flag = 1;
  int minprime = 9999;
  scanf("%d%d", &n, &m);
  if (isprime(m)) {
    for (int i = n+1; i <= m; i++) {
      if (isprime(i))
        minprime = MIN(i, minprime);
    }
  }

  printf("%s\n", minprime == m ? "YES":"NO");

  return EXIT_SUCCESS;
}

int isprime(int n) {
  int flag = 1;
  for (int i = 2; i <= n/2; i++) {
    if (n % i == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}
