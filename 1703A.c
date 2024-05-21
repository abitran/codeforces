#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

  int t;
  scanf("%d", &t);
  while (t--) {
    char text[4];
    scanf("%s", text); 
    if ((text[0] == 'Y' || text[0] == 'y') &&
        (text[1] == 'e' || text[1] == 'E') &&
        (text[2] == 's' || text[2] == 'S'))
      printf("YES\n");
    else
      printf("NO\n");
  }
  
  return EXIT_SUCCESS;
}
