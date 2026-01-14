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
  int cats[105];

  if (n % 2 == 0) {
    for (int i = 1; i <= n; i += 2) {
      if (i + 1 <= n) {
        cats[i] = i + 1;
        cats[i + 1] = i;
      }
    }
  }

  else {
    for (int i = 1; i <= n - 3; i += 2) {
      cats[i] = i + 1;
      cats[i + 1] = i;
    }
    cats[n - 2] = n;
    cats[n - 1] = n - 2;
    cats[n] = n - 1;
  }

  for (int i = 1; i <= n; i++)
    printf("%d ", cats[i]);

  printf("\n");
}
