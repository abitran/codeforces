#include <stdio.h>
#include <stdlib.h>
#define MAX(X,Y) (X) > (Y) ? (X):(Y)

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
  int x, y , z;
  scanf("%d %d %d", &x, &y, &z);
  int max = MAX(MAX(x,y), z);
  if (x == max && y == max || y == max && z == max || x == max && z == max) {
    printf("YES\n");
    if (x == y) 
      printf("%d %d %d\n", x, z, 1);
    else if (y == z)
      printf("%d %d %d\n", y, x, 1);
    else if (x == z)
      printf("%d %d %d\n", x, y, 1);
  }
  else
    printf("NO\n");
}

