#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 1000 // null + carrier

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char s[MAXSIZE];
  s[0] = '\0';
  int n;
  scanf("%d", &n);
  char *text = "Yes";
  size_t len = strlen(text);
  for (int i = 0; (strlen(s) + len < MAXSIZE); i++)
    strcat(s, text);

  char input[MAXSIZE];
  scanf("%s", input);

  char *found = strstr(s, input);
  puts(found != NULL ? "YES" : "NO");
}
