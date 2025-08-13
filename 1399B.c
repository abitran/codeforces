#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define min(x,y) (x < y ? x:y) 

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    long long a[n], b[n];
    for (int i = 0; i < n; i++)
      scanf("%lld", &a[i]);

    for (int i = 0; i < n; i++)
      scanf("%lld", &b[i]);

    int mina = INT_MAX;
    int minb = INT_MAX;

    for (int i = 0; i < n; i++){
      mina = min(mina, a[i]);
      minb = min(minb, b[i]);
    }

    int diffa = 0;
    int diffb = 0;
    long long moves = 0;
    for (int i = 0; i < n; i++) {
      diffa = a[i] - mina;
      diffb = b[i] - minb;
      moves += diffa > diffb ? diffa:diffb;
    }

    printf("%lld\n", moves);


  }

  return EXIT_SUCCESS;
}
