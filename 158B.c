#include <stdio.h>
#include <stdlib.h>

#define MIN(a,b)(a < b? a:b)

int main(int argc, char **argv)
{

  int n;
  scanf("%d", &n);
  int tax[5] = {0};
  int ncabs = 0;
  int s;
  for (int i = 0; i < n; i++) {
    scanf("%d", &s);
    tax[s]++;
  }

  ncabs = tax[4] + tax[3] + tax[2]/2;
  tax[1] -= tax[3];
  if (tax[2] % 2 == 1){
    ncabs += 1;
    tax[1] -= 2;
  }
  if (tax[1] > 0)
    ncabs += (tax[1] + 3) / 4;


  printf("%d", ncabs);

  return EXIT_SUCCESS;

}
