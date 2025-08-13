#include <stdio.h>
#include <stdlib.h>

#define MAXN 50

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  char path[MAXN + 1];
  scanf("%s", path);
  int coins = 0;
  int pos = 0;

  for (int i = 0; i < n; i++) {
    if (path[i] == '*' && path[i + 1] == '*') {
      pos = i;
      break;
    }
  }

  if (pos >= 1) {
    for (int i = 0; i < pos; i++) {
      if (path[i] == '@')
        coins++;
    }
  }

  else {
    for (int i = 0; i < n; i++) {
      if (path[i] == '@')
        coins++;
    }
  }

  printf("%d\n", coins);
}
