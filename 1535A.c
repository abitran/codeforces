#include <stdio.h>
#include <stdlib.h>

#define MAX(X, Y) (X) > (Y) ? (X) : (Y)

int cmp(const void *, const void *);

int main(int argc, char *argv[]) {
  int t;
  int champs[4];
  scanf("%d", &t);
  int fin1, fin2;
  while (t--) {
    for (int i = 0; i < 4; i++)
      scanf("%d", &champs[i]);

    fin1 = MAX(champs[0], champs[1]);
    fin2 = MAX(champs[2], champs[3]);

    qsort(champs, 4, sizeof(int), cmp);

    if ((champs[3] == fin1 && champs[2] == fin2) ||
        (champs[3] == fin2 && champs[2] == fin1)) {
      printf("YES\n");
    }

    else
      printf("NO\n");
  }

  return EXIT_SUCCESS;
}

int cmp(const void *x, const void *y) { return (*(int *)x - *(int *)y); }
