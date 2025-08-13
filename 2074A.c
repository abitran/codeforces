#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void solve();

typedef struct point {
  int x;
  int y;
} point;

int square_distance(point *, point *);

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return EXIT_SUCCESS;
}

void solve() {
  int l, u, r, d;
  scanf("%d %d %d %d", &l, &r, &d, &u);
  point points[4] = {{-l, 0}, {r, 0}, {0, -d}, {0, u}};

  int dst1 = square_distance(&points[0], &points[3]);
  int dst2 = square_distance(&points[3], &points[1]);
  int dst3 = square_distance(&points[1], &points[2]);
  int dst4 = square_distance(&points[2], &points[0]);

  int diag1 = square_distance(&points[0], &points[1]);
  int diag2 = square_distance(&points[3], &points[2]);
  if ((dst1 == dst2 && dst2 == dst3 && dst3 == dst4) && (diag1 == diag2)) {
    printf("YES\n");
    return;
  } else {
    printf("NO\n");
  }
}

int square_distance(point *p1, point *p2) {
  return (pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2));
}
