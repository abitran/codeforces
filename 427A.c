#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int n;
  int untreated = 0;
  int police = 0;
  scanf("%d", &n);
  int events[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &events[i]);
  }

  for (int i = 0; i < n; i++){
    if (events[i] == -1 && police > 0)
      police--;
    else if(events[i] == -1 && police == 0)
        untreated++;
    else {
      police += events[i];
    }
  }

  printf("%d\n", untreated);


  return EXIT_SUCCESS;
}
