#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    char bin[n + 1];
    scanf(" %[^\n]s", bin);
    int l = 0;
    int r = n-1;
    
    while (r >= l) {
      if ((bin[l] == '1' && bin[r] == '0') ||
          (bin[l] == '0' && bin[r] == '1')) {
        n -= 2; 
        l++;
        r--;
      } else
        break;
    }

    printf("%d\n", n);
  }

  return EXIT_SUCCESS;
}
