#include <stdio.h>
#include <stdlib.h>

#define MAX(x,y) (x > y ? x : y)

int main(int argc, char *argv[])
{
  int t;
  int n, x;

  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &n, &x);
    int stations[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &stations[i]);
    int gmax = stations[0];
    for (int i = 1; i < n; i++) {
      int gap = stations[i] - stations[i-1];
      gmax = MAX(gap, gmax);
    }
    gmax = MAX(gmax, 2*(x - stations[n-1]));

    printf("%d\n", gmax);
    
    }
  return EXIT_SUCCESS;
}
