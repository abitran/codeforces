#include <stdio.h>
#include <stdlib.h>

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
  char a[205];
  scanf("%s", a);
  char target[] = "2020";
  for (int i = 0; i <= 4; i++) {
    int ok = 1;
    for (int j = 0; j < i; j++) {
      if (a[j] != target[j]) {
        ok = 0;
        break;
      }
    }

    for (int j = 0; j < 4 - i && ok; j++) {
      if (a[n - (4 - i) + j] != target[i + j]) {
        ok = 0;
        break;
      }
    }

    if (ok) {
      puts("YES");
      return;
    }
  }

  puts("NO");
}
