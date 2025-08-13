#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    int found = 0;
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    
    for (int i = 0; i < n; i++) {
      if (a[i] == k){
        found = 1;
        break;
      }
    }
    if (found == 0)
      printf("NO\n");
    else {
      printf("YES\n");

    }
  }

  return EXIT_SUCCESS;
}
