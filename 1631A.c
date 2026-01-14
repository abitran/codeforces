#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

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
  int a[n], b[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (int i = 0; i < n; i++)
    scanf("%d", &b[i]);

  int maxa = 0, maxb = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > b[i]) {
      int temp = a[i];
      a[i] = b[i];
      b[i] = temp;
    }
    maxa = MAX(maxa, a[i]);
    maxb = MAX(maxb, b[i]);
  }

  printf("%d\n", maxa * maxb);
}
