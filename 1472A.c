#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int w, h, n;
    int count = 1;
    scanf("%d %d %d", &w, &h, &n);
    while ((w & 1) == 0){
      w /= 2;
      count *= 2;
    }

    while ((h & 1) == 0){
      h /= 2;
      count *= 2;
    }

    printf("%s\n", count >= n ? "YES":"NO");
    
  }

  return EXIT_SUCCESS;
}
