#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
  int n;
  scanf("%d", &n);
  long long pile1 = 0; 
  long long pile2 = 0;
  for (int i = 1; i < n/2; i++)
    pile1 += pow(2, i);
  
  pile1 += pow(2, n);

  for (int i = n/2; i < n; i++)
    pile2 += pow(2, i);

  long long diff = llabs(pile1 - pile2);

  printf("%lld\n", diff);
}
