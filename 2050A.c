#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 51
#define MAX_M 500

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
  scanf("%d %d", &n, &m);
  char text[n][MAX_M];
  for (int i = 0; i < n; i++)
    scanf("%s", text[i]);
  int x = 0;
  for (int i = 0; i < n; i++) {
    if (strlen(text[i]) <= m) {
      x++;
      m -= strlen(text[i]);
    } else {
      break;
    }
  }

  printf("%d\n", x);
}
