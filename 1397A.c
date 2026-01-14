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
  char str[1002];
  int freq[26] = {0};
  for (int i = 0; i < n; i++) {
    scanf("%s", str);
    for (int j = 0; str[j]; j++) {
      freq[str[j] - 'a']++;
    }
  }

  for (int i = 0; i < 26; i++) {
    if (freq[i] % n != 0) {
      puts("NO");
      return;
    }
  }

  puts("YES");
}
