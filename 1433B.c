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
  int a[51];
  int moves = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  int first1 = -1, last1 = -1;
  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      if (first1 == -1)
        first1 = i;
      last1 = i;
    }
  }

  for (int i = first1; i < last1; i++) {
    if (a[i] == 0)
      moves++;
  }

  printf("%d\n", moves);
}
