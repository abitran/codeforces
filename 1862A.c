#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 20

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, m;
  char carpet[MAX_SIZE][MAX_SIZE + 1] = {0};
  scanf("%d %d", &n, &m);

  for (int i = 0; i < n; i++)
    scanf("%s", carpet[i]);

  const char *target = "vika";

  int pos = 0;

  for (int c = 0; c < m && pos < 4; c++) {
    for (int r = 0; r < n; r++) {
      if (carpet[r][c] == target[pos]) {
        pos++;
        break;
      }
    }
  }

  puts(pos == 4 ? "YES" : "NO");
}
