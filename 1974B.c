#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 200000

void solve();

char *uniques(char *);

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char b[MAXN];
  int n;
  scanf("%d", &n);
  scanf("%s", b);
  char *symmetric = uniques(b);
  size_t len = strlen(symmetric);
  for (int i = 0; i < n; i++) {
    char c = b[i];
    int idx = 0;
    while (idx < len && symmetric[idx] != c)
      idx++;
    putchar(symmetric[len - idx - 1]);
  }
  putchar('\n');

  free(symmetric);
}

char *uniques(char *b) {
  int table[26] = {0};
  size_t len = strlen(b);
  int i;
  int size = 0;

  for (i = 0; i < len; i++) {
    table[b[i] - 'a'] = 1;
    size++;
  }

  char *r = malloc(size + 1);

  int pos = 0;
  for (int i = 0; i < 26; i++) {
    if (table[i] == 1) {
      r[pos++] = 'a' + i;
    }
  }
  r[pos] = '\0';

  return r;
}
