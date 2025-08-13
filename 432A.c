#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int n, k;
  scanf("%d %d", &n, &k);
  int teams[n];
  int comps = 0;
  for (int i = 0; i < n; i++)
    scanf("%d", &teams[i]);

  for (int i = 0; i < n; i++){
    if (teams[i] + k <= 5)
      comps++;
  }

  printf("%d", comps/3);


  return EXIT_SUCCESS;
}
