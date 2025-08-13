#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  long long n, x;
  scanf("%lld %lld", &n, &x);
  int chdis = 0;
  char sign;
  long long pack = 0;
  for (int i = 0; i < n; i++) {
    scanf(" %c %lld", &sign, &pack);
    switch (sign) {
      case '+':
        x += pack;
        break;

      case '-':
        if (x >= pack)
          x -= pack;
        else
          chdis ++;

        break;

      default:
        break;
    }
  }
  printf("%lld %d\n", x, chdis);

  return EXIT_SUCCESS;
}
