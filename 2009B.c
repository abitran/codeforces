#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve();

int main(int argc, char *argv[]) {
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
  getchar();
  char beatmap[n][5];
  for (int i = 0; i < n; i++) {
    scanf(" %[^\n]s", beatmap[i]);
  }

  for (int i = n; i >= 0; i--) {
    for (int j = 0; j < 4; j++) {
      if (beatmap[i][j] == '#')
        printf("%d ", j+1);
    }
  }
  printf("\n");
}
