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
  char s[n];
  scanf("%s", s);

  int ct1 = 0, ct0 = 0;
  for (int i = 0; i < n; i++)
    s[i] == '0' ? ct0++ : ct1++;

  if (n == 1) {
    puts("YES");
    return;
  }
  if (n == 2) {
    if (ct0 == 1 && ct1 == 1) {
      puts("YES");
      return;
    } else {
      puts("NO");
      return;
    }
  }

  puts("NO");
}
