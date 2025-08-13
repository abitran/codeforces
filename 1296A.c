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
  int sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    sum += a[i];
  }

  int odd = 0;
  int even = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] & 1)
      odd++;
    else
      even++;
  }
  
  if ((sum & 1) || (odd >= 1) && (even >= 1))
    printf("YES\n");
  else
    printf("NO\n");
}
