#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int n;
  scanf("%d", &n);
  int table[n];
  int amaze = 0;
  for (int i = 0; i < n; i++)
    scanf("%d", &table[i]);

  int min = table[0];
  int max = table[0];
  for (int i = 1; i < n; i++) {
    if (table[i] < min) {
      amaze++;
      min = table[i];
    }
    if (table[i] > max) {
      amaze++;
      max = table[i];
    }
    
  }

  printf("%d\n", amaze);

  return EXIT_SUCCESS;

}
