#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int a[n];
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
      if (i % 2 != a[i] % 2) {
        if (a[i] % 2 != 0)
          odd++;
        else
          even++;
      }
      
    }
   
    if (odd == even)
      printf("%d\n", even);
    
    else 
      printf("%d\n", -1);
  }
  return EXIT_SUCCESS;
}
