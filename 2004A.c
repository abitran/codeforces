#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  int x[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &x[i]);

  if (n > 2) {
    puts("NO");
    return;
  }

  int mid = (x[0] + x[1]) / 2;
  if (mid != x[0] && mid != x[1]) {
    puts("YES");
    return;
  }
  else {
    puts("NO");
    return;
  }

}
