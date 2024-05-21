#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(int argc, char **argv) {

  int n;
  scanf("%d", &n);
  int history[n];
  memset(history, 0, sizeof(history));

  int min = INT_MAX;
  int max = 0;
  int amaze = 0;

  for (int i = 0; i < n; i++)
    scanf("%d", &history[i]);

  for (int i = 1; i < n; i++) {
    if ((history[i] > history[i-1]) && history[i] > max){
      amaze++;
      max = history[i];
      if (history[i-1] < min)
        min = history[i-1];
    }

    else if ((history[i] < history[i-1]) && history[i] < min){
      amaze++;
      min = history[i];
    }
  }



  printf("%d\n", amaze);

  return EXIT_SUCCESS;

}
