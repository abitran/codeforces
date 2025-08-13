#include <stdio.h>
#include <stdlib.h>

#define MAX(X,Y) (X > Y ? X:Y)

int main(int argc, char *argv[])
{
  int t;
  int a, b, c;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d%d", &a, &b ,&c);
    printf("%d %d %d\n", MAX(0,MAX(b,c)+1-a), MAX(0,MAX(a,c)+1-b), MAX(0, MAX(a,b)+1-c));
  }

  return EXIT_SUCCESS;
}
