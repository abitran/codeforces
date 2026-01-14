#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void solve();

bool is_between(int, int, int);

typedef struct {
  int x;
  int y;
} Point;

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  Point A, B, F;
  scanf("%d %d", &A.x, &A.y);
  scanf("%d %d", &B.x, &B.y);
  scanf("%d %d", &F.x, &F.y);

  int distance = abs(B.x - A.x) + abs(B.y - A.y);

  if ((A.x == F.x && B.x == A.x) && is_between(A.y, F.y, B.y)) {
    distance += 2;
  } else if ((A.y == F.y && B.y == A.y) && is_between(A.x, F.x, B.x)) {
    distance += 2;
  }

  printf("%d\n", distance);
}

bool is_between(int x, int y, int z) {
  return (x > y && z < y) || (x < y && z > y);
}
