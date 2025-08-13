#include <stdio.h>
#include <stdlib.h>

#define ROWS 10
#define COLS 10
#define MIN(x,y) (x < y ? x : y)

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
  char grid[ROWS][COLS + 1];
  int totalpoints = 0;
  for (int i = 0; i < ROWS; i++)
    scanf(" %[^\n]s", grid[i]);

  for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLS; c++) {
      // ring=min(r,c,9−r,9−c)+1
      int ring = MIN(r, c);
      ring = MIN(ring, ROWS - 1 - r);
      ring = MIN(ring, COLS - 1 - c);
      ring++;

      if (grid[r][c] == 'X')
        totalpoints += ring;
    }
  }

  printf("%d\n", totalpoints);
}
