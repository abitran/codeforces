#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1001
#define MIN(x, y) ((x) < (y) ? (x) : (y))

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  char curr[MAX_N];
  char lock[MAX_N];
  scanf("%s", curr);
  scanf("%s", lock);
  int moves = 0;
  for (int i = 0; i < n; i++) {
    int x = curr[i] - '0';
    int y = lock[i] - '0';
    int diff = abs(x - y);
    moves += (diff < 10 - diff ? diff : 10 - diff);
  }

  printf("%d\n", moves);
}
