#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  
  if (n % 2 == 0) 
    printf("%d\n", n / 2);

  else {
    n -= 3;
    printf("%d\n", n / 2 + 1);
    printf("3 ");
  }

  for (int i = 0; i < n / 2; i++)
    printf("2 ");

  
  return EXIT_SUCCESS;
}
