#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
  char text[11];
  int t;
  scanf("%d", &t);
  while (t--) {
    scanf(" %10[^\n]s", text);
    int size = strlen(text);
    int flag = 0;
    
    if (size == 1) 
      printf("NO\n");
      
    else {
      for (int i = 1; i < size; i++) {
        if (text[0] != text[i]) {
          char a,b;
          a = text[0];
          b = text[i];
          text[i] = a;
          text[0] = b;
          flag = 1;
          break;
        }
      }
      if (flag) 
        printf("YES\n%s\n", text);
      else
        printf("NO\n");
    }
  }
  return EXIT_SUCCESS;
}
