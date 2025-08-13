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
  int a[n];
  
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  int odd_par = a[0] % 2;
  int even_par = a[1] % 2;
  int ispossible = 1;

  for (int i = 0; i < n; i +=2) {
    if (a[i] % 2 != odd_par) {
      ispossible = 0 ;
      break;
    }
  }

  for (int i = 1; i < n; i += 2) {
    if (a[i] % 2 != even_par) {
      ispossible = 0;
      break;
    }
  }

  printf("%s\n", ispossible ? "YES" : "NO");

}
