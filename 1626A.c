#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char s[55];
  scanf("%s", s);
  int freq[26] = {0};
  size_t len = strlen(s);

  for (int i = 0; i < len; i++)
    freq[s[i] - 'a']++;

  for (int i = 0; i < 26; i++) {
    if (freq[i] == 1) {
      putchar('a' + i);
    }
  }

  for (int i = 0; i < 26; i++) {
    if (freq[i] == 2) {
      putchar('a' + i);
      putchar('a' + i);
    }
  }
  putchar('\n');
}
