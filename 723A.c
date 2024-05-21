#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int comp(const void *a, const void *b){
  return (*(int*)a - *(int*)b);
}

int main(int argc, char **argv) {

  const int points = 3;
  int locs[points];
  memset(locs, 0, sizeof(locs));
  for (int i = 0; i < points; i++) {
    scanf("%d", &locs[i]);
  }

  qsort(locs, points, sizeof(int), comp);

  printf("%d\n", locs[points-1] - locs[0]);


  return EXIT_SUCCESS;
}
