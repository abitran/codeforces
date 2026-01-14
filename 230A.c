#include <stdio.h>
#include <stdlib.h>

void solve();

int comp(const void *, const void *);

typedef struct {
  int x;
  int y;
} Dragon;

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int s, n;
  scanf("%d %d", &s, &n);
  Dragon fights[n];
  for (int i = 0; i < n; i++)
    scanf("%d %d", &fights[i].x, &fights[i].y);
  qsort(fights, n, sizeof(Dragon), comp);

  for (int i = 0; i < n; i++) {
    if (s > fights[i].x)
      s += fights[i].y;
    else {
      puts("NO");
      return;
    }
  }
  puts("YES");
}

int comp(const void *a, const void *b) { return *(int *)a - *(int *)b; }
