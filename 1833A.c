#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_N 52

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  bool mel[7][7];
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      mel[i][j] = false;
    }
  }

  int n;
  scanf("%d", &n);
  char s[MAX_N];
  scanf("%s", s);

  int moves = 0;

  for (int i = 0; i < n - 1; i++) {
    int a = s[i] - 'a';
    int b = s[i + 1] - 'a';
    if (!mel[a][b]) {
      mel[a][b] = true;
      moves++;
    }
  }
  printf("%d\n", moves);
}
