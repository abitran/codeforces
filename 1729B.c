#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

  char alfa[27] = "0abcdefghijklmnopqrstuvwxyz";
  int a, b;
  char encode[MAXN];
  char s[MAXN];
  int idx = 0;
  int n;
  scanf("%d", &n);
  scanf("%s", encode);
  for (int i = n - 1; i >= 0;) {
    if (encode[i] == '0') {
      a = (encode[i - 2] - '0') * 10;
      b = encode[i - 1] - '0';
      s[idx++] = alfa[a + b];
      i -= 3;
    } else {
      s[idx++] = alfa[encode[i] - '0'];
      i--;
    }
  }
  s[idx] = '\0';

  for (int i = idx - 1; i >= 0; i--)
    putchar(s[i]);

  putchar('\n');
}
