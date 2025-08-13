#include <stdio.h>
#include <stdlib.h>

#define MAXN 100

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  int min = 99999;
  int a, b;
  int h[MAXN] = {0};

  for (int i = 0; i < n; i++)
    scanf("%d", &h[i]);

  for (int i = 0; i < n; i++) {
    int diff = 0;
    if (i == n - 1) {
      diff = abs(h[n - 1] - h[0]);
      if (diff < min) {
        min = diff;
        a = i;
        b = 0;
      }
    } else {
      diff = abs(h[i] - h[i + 1]);
      if (diff < min) {
        min = diff;
        a = i;
        b = i + 1;
      }
    }
  }

  printf("%d %d\n", a + 1, b + 1);
}
