#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 102

void solve();

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  char s[MAXN];
  scanf("%s", s);
  if (n % 2 != 0) {
    puts("NO");
    return;
  }

  puts(s[0] != s[n-1] ? "YES" : "NO");

}
