#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *, const void *);

int main(int argc, char **argv) {
  int t;
  scanf("%d", &t);
  while (t--){
    int numbs[3];
    memset(numbs, 0, sizeof(numbs));
    for (int i = 0; i < 3; i++)
      scanf("%d", &numbs[i]);

    qsort(numbs, 3, sizeof(int), compare);

    printf("%s\n", numbs[1] == numbs[2] - numbs[0] ? "YES": "NO");

  }
}

int compare(const void *a, const void *b) {

  return ( *(int *)a - *(int *)b);
}
