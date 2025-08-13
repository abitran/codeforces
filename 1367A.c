#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

  int t;
  char text[100];
  scanf("%d", &t);
  while (t--) {
    scanf("%s", text);
    size_t len = strlen(text);

    for (int i = 0; i < len-1; i +=2) 
      printf("%c", text[i]);
    
    printf("%c\n",text[len-1]);
  }

  return EXIT_SUCCESS;
}
