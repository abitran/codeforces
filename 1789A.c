#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

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
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (gcd(a[i], a[j]) <= 2) {
        puts("YES");
        return;
      }
    }
  }

  puts("NO");

  printf("%d\n", gcd(3, 6));
}

int gcd(int x, int y) {
  while (y != 0) {
    int temp = y;
    y = x % y;
    x = temp;
  }

  return x;
}
