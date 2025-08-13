#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void solution(long, long, long);

int main(int argc, char *argv[])
{
  int t;
  long s, m, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%ld%ld%ld", &n, &s, &m);
    solution(s, m , n);
  }
  return EXIT_SUCCESS;
}

void solution(long s, long m, long n) {
  long cend= 0;
  long l, r;
  int canshower = false;
  for (long i = 0; i < n; i++) {
    scanf("%ld%ld", &l, &r);
    if (l - cend >= s) {
      canshower = true;
    }
  
    cend = r;
  }

  printf("%s\n", (m - cend >= s) || canshower ? "YES":"NO");

}
