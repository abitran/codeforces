#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 2000

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
  char str[MAXN + 1];
  scanf("%s", str);
  char bin[MAXN + 1];
  for (int i = 0; i < MAXN - 1; i += 2) {
    bin[i] = '1';
    bin[i + 1] = '0';
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (str[i] == str[j]) {
        if (bin[i] != bin[j]) {
          puts("NO");
          return;
        }
      }
    }
  }
  puts("YES");
}
