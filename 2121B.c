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
  char s[n + 1];
  scanf("%s", s);
  int alphas[26] = {0};
  for (int i = 0; i < n; i++)
    alphas[s[i] - 'a']++;

  int ok = 0;

  for (int i = 1; i <= n - 2; i++) {
    if (alphas[s[i] - 'a'] >= 2) {
      ok = 1;
      break;
    }
  }

  puts(ok ? "YES" : "NO");
}
