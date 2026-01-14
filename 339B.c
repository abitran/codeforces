#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, m;
  long long time = 0;
  int current = 1;
  scanf("%d%d", &n, &m);
  int tasks[m];
  for (int i = 0; i < m; i++)
    scanf("%d", &tasks[i]);

  for (int i = 0; i < m; i++) {
    if (tasks[i] >= current)
      time += tasks[i] - current;
    else
      time += (n - current) + tasks[i];
    current = tasks[i];
  }

  printf("%lld\n", time);
}
