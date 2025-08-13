#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[])
{
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
  char path[n+1];
  scanf(" %[^\n]s", path);
  int x = 0;
  int y = 0;
  int notfound = 1;
  for (int i = 0; i < n; i++) {
    switch (path[i]) {
      case 'U': y++;
      break;
      case 'D': y--;
      break;
      case 'L': x--;
      break;
      case 'R': x++;
      break;
    }
    if (x == 1 && y == 1) {
      printf("YES\n");
      notfound = 0;
      break;
    }
    else
      continue;
  }

  if (notfound)
    printf("NO\n");
}
