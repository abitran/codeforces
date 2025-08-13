#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int a, b;
    scanf("%d %d", &a, &b);
    int ways;
    if (a == b)
      ways = 0;
    else if (a < b) {
      int diff = b -a;
      if ((diff & 1) == 1){
        ways = 1;
      }
      else
        ways = 2;
        
    }
    else{
      int diff = a - b;
      if ((diff & 1) == 0){
        ways = 1;
      }
      else
        ways = 2;
    }

    printf("%d\n", ways);

  }


  return EXIT_SUCCESS;
}
