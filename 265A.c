#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve();

int main(int argc, char *argv[])
{
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  const int len = 50;
  char s[len+1];
  char t[len+1];
  scanf("%s", s);
  scanf("%s", t);
  int spos = 0;
  size_t tlen = strlen(t);

  for (int i = 0; i < tlen; i++) {
    if (t[i] == s[spos])
      spos++;
  }
  printf("%d\n", spos+1);
}
