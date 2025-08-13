#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void solve();

bool issorted(int [], int);

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return EXIT_SUCCESS;
}

void solve() {
  int n, k;
  scanf("%d %d", &n, &k);
  int a[n];
  for (int i = 0; i < n; i++) 
    scanf("%d", &a[i]);

  if (issorted(a, n) || k > 1)
    printf("YES\n");
  else
   printf("NO\n");

}

bool issorted(int a[], int n) {
  for (int i = 1; i < n; i++) 
    if (a[i] < a[i-1])
      return false;

  return true;
}
