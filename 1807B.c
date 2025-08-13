#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int a[n];
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      if (a[i]&1)
        odd += a[i];
      else 
        even += a[i];
    }
    printf("%s\n", even > odd ? "YES":"NO");
  }

  return EXIT_SUCCESS;
}
