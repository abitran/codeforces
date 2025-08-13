#include <stdio.h>
#include <stdlib.h>

int isprime(int);

int main(int argc, char **argv) {

  int n;
  int x, y;
  scanf("%d", &n);
  for (int i = 2; i < n; i++) {
    if (isprime(i))
      continue;
    
    else {
      x = i;
      if (!isprime(n - x)) {
        y = n - x;
        break;
      }
    }
  }

  printf("%d %d\n", x, y);

  return EXIT_SUCCESS;
}

int isprime(int n) {
  int flag = 1;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}
