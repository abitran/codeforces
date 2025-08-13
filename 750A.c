#include <stdio.h>
#include <stdlib.h>

#define MAX(X,Y) (X)>(Y)?(X):(Y)

int main(int argc, char *argv[])
{

  int n, k;
  scanf("%d%d", &n, &k);
  int maxp = 0;
  int prb = 0;
  int limit = 240;
  int time = 0;
  for (int i = 1; i <= n; i++) {
    time += 5*i;
    if ((time + k) <= limit) {
      prb++;
      maxp = MAX(maxp, prb);
    }
  }

  printf("%d\n", maxp);


  return EXIT_SUCCESS;
}
