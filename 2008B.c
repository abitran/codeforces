#include <stdio.h>
#include <stdlib.h>

#define MAXN 200000

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
  char s[MAXN + 2];
  scanf("%s", s);
  int id = 0;
  while (id < n && s[id] == '1')
    id++;
  if ((long long)id * id == n || (long long)(id - 1)*(id - 1) == n) {
    puts("YES");
  } else if (id == n && n == 4)
    puts("YES");
  else
    puts("NO");
}
