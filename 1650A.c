#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  char s[50];
  char c;
  scanf(" %[^\n]s", s);
  getchar();
  scanf("%c", &c);

  size_t len = strlen(s);

  if (len == 1) {
    printf("%s\n", s[0] == c ? "YES" : "NO");
    return;
  }

  if (s[0] == c || s[len - 1] == c) {
    printf("YES\n");
    return;
  }

  for (int i = 0; i < len; i++) {
    if (i % 2 == 0 && s[i] == c) {
      printf("YES\n");
      return;
    }
  }

  printf("NO\n");
}
