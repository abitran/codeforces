#include <stdbool.h>
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
  int n, x;
  scanf("%d %d", &n, &x);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  int i = 0;
  while (i < n && a[i] == 0)
    i++;

  if (i == n) {
    puts("YES");
    return;
  }

  int time = x;

  while (i < n && time > 0) {
    i++;
    time--;
  }

  while (i < n && a[i] == 0)
    i++;

  puts(i == n ? "YES" : "NO");
}
