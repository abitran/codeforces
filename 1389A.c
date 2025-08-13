#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  long l, r;
  scanf ("%d", &t);
  while (t--) {
    scanf("%ld %ld", &l, &r);
    long x, y = 0;
    
    if(l*2 <= r) {
        x = l;
        y = l * 2;
    }
    else{
        x = -1;
        y = -1;
    }
    printf("%ld %ld\n", x, y);
  }
  return EXIT_SUCCESS;
}
