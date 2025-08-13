#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }

  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  int b[n];
  int a[n];
  
  for (int i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }

  int l = 0;
  int r = n - 1;
  
  for (int i = 0; i < n; i++) {
    if ( i % 2 == 0)
      a[i] = b[l++];
    else
      a[i] = b[r--];
  }

  for (int k = 0; k < n; k++)
    printf("%d ", a[k]);

  printf("\n");

}
