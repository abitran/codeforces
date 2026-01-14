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
  int n;
  scanf("%d", &n);
  char str[101];
  scanf("%s", str);
  size_t len = strlen(str);
  char rev[len];
  int k = 0;
  for (int i = len - 1; i >= 0; i--) {
    rev[k++] = str[i];
  }
  rev[k] = '\0';

  char revstr[202];
  strcpy(revstr, rev);
  strcat(revstr, str);

  if (strcmp(str, revstr) <= 0)
    puts(str);
  else
    puts(revstr);
}
