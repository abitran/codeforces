#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

  char str[201];
  char res[201];
  fgets(str, 201, stdin);
  int len = strlen(str);
  int j = 0;

  for (int i = 0; i < len; i++){

    if (str[i] == '.') 
      res[j++] = '0';

    if (str[i] == '-' && str[i+1] == '.'){
      res[j++] = '1';
      i++;
    }

    if (str[i] == '-' && str[i+1] == '-'){
      res[j++] = '2';
      i++;
    }

  }

  res[j] = '\0';

  printf("%s", res);

  return EXIT_SUCCESS;
}

