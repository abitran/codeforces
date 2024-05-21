#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main(int argc, char **argv) {

  int n;
  scanf("%d", &n);
  int cards[n];
  long long serej = 0, dima = 0;
  memset(cards, 0, sizeof(int));
  int max = 0;
  int turn = 0;

  for (int i = 0; i < n; i++)
    scanf("%d", &cards[i]);

  int i = 0, j = n - 1;

  while (i <= j) {
    
    max = MAX(cards[i], cards[j]);
 
    if (turn % 2 == 0)
      serej += max;

    else 
      dima += max;
      
    max == cards[i] ? i++ : j--;

    turn++;
  }

  printf("%lld %lld\n", serej, dima);

  return EXIT_SUCCESS;
}
