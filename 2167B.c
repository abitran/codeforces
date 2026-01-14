#include <stdio.h>
#include <stdlib.h>

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
  char s[MAXN + 1];
  char t[MAXN + 1];
  scanf("%d", &n);
  scanf("%s %s", s, t);
  int table_t[26] = {0};
  int table_s[26] = {0};

  for (int i = 0; i < n; i++) {
    table_t[t[i] - 'a']++;
    table_s[s[i] - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    if (table_t[i] != table_s[i]) {
      puts("NO");
      return;
    }
  }

  puts("YES");
}
