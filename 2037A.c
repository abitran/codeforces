#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 20

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
  int a[MAXN] = {0};
  int ch[n];
  int score = 0;
  memset(ch, 0, sizeof(int) * n);

  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] == a[j] && ch[i] == 0 && ch[j] == 0) {
        score++;
        ch[i] = 1;
        ch[j] = 1;
        break;
      }
    }
  }

  printf("%d\n", score);
}
