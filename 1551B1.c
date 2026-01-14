#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

void solve();

int main(int argc, char *argv[]) {

  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char s[52];
  int freq[26] = {0};
  scanf("%s", s);
  size_t len = strlen(s);
  for (int i = 0; i < len; i++) {
    freq[s[i] - 'a']++;
  }

  int c1 = 0;
  int c2 = 0;

  for (int i = 0; i < 26; i++) {
    if (freq[i] == 1)
      c1++;
    if (freq[i] > 1)
      c2++;
  }

  printf("%d\n", c1 / 2 + c2);
}
