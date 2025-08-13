#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

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
  char str[n + 1];
  int count = 0;
  bool continues_cells = false;
  scanf("%s", str);
  for (int i = 0; i < n; i++) {
    if (i > 0 && i < n - 1) {
      if (str[i - 1] == '.' && str[i] == '.' && str[i + 1] == '.') {
        continues_cells = true;
        break;
      }
    }
    if (str[i] == '.')
      count++;
  }

  printf("%d\n", continues_cells == true ? 2 : count);
}
